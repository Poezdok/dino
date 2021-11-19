//
// Created by alex on 19.11.2021.
//

#include "dino/headers.h"

#include "dino/handler.h"
#include "dino/generator.h"

int main (int argc, char **argv)
{
    ros::init(argc, argv, "dino");
    initGenerator();
    initHandlers();

    ros::NodeHandle node_handler("~");

//    std::string service_name = node_handler.param<std::tring>("dino_service", "make_dino");
    std::string service_name;
    node_handler.param<std::string>("service_name", service_name, "make_dino");

    ros::ServiceServer dino_service = node_handler.advertiseService(service_name, getDino);

    ros::spin();

    return 0;
}


