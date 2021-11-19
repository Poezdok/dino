# dino
Dino-generator ROS package

# Usage

using `roslaunch` command:

```
$ roslaunch dino dino.launch

$ rosservice call /dino/make_a_dino "dino_base: '$dino_base'" 
```

using `rosrun` & `rosservice call`:

```
$ rosrun dino dino_node

$ rosservice call /dino/make_dino "dino_base: '$dino_base'"
```

To listen the topic:

```
rostopic echo /dino/dinosaurus
```
