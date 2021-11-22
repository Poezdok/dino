# Dino
Dino-generator ROS package

# Usage

### Using `roslaunch` & `rosservice call` commands:

```
$ roslaunch dino dino.launch

$ rosservice call /dino/make_a_dino "dino_base: '$DINO_BASE'" 
```

### Using `rosrun` & `rosservice call`:

```
$ rosrun dino dino_node

$ rosservice call /dino/make_dino "dino_base: '$DINO_BASE'"
```

_Please note that `roslaunch` and `rosrun` commands gives you different service's names (make_a_dino or make_dino respectively). It's done to demonstrate the use of params_

### To listen the topic:

```
rostopic echo /dino/dinosaurus
```
