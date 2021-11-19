//
// Created by alex on 19.11.2021.
//

#include "dino/headers.h"

#include "dino/handler.h"
#include "dino/generator.h"


using namespace std;


static void topicHandler(const std_msgs::String &message);


static ros::Subscriber g_subscriber;
static ros::Publisher  g_publisher;


bool getDino(dino::make_dino::Request &req, dino::make_dino::Response &res)
{
    string dino = getDinoName(req.dino_base);
    res.dino = dino;
    std_msgs::String message;
    message.data = dino;

    g_publisher.publish(message);
    return true;
}


static void topicHandler(const std_msgs::String &message)
{
    string dino_name = message.data;
    string dino_fact = getDinoFact();
    string text = dino_name + " " + dino_fact;
    ROS_INFO("New dino in the zoo!!!\n%s", text.c_str());
}


void initHandlers(void)
{
    ros::NodeHandle node_handler("~");
    string topic_name;
    node_handler.param<std::string>("topic_name", topic_name, "dinosaurs");


    // Idk why, but from here it doesn't work properly
    //    ros::ServiceServer dino_service = node_handler.advertiseService("get_dino", getDino);

    g_subscriber = node_handler.subscribe(topic_name, 1000, topicHandler);
    g_publisher = node_handler.advertise<std_msgs::String>(topic_name, 1000);
}