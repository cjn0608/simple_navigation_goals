#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <move_base_msgs/MoveBaseAction.h>
#include "tf/tf.h"
#include <tf/transform_listener.h>
#include <geometry_msgs/PoseArray.h>
class MyNode
{
public:
private:
};

int main (int argc, char **argv)
{
  ros::init(argc, argv, "test_fibonacci_class_client");
  ros::Rate loop_rate(10);
  while(ros::ok())
  {
      ros::spinOnce();
      loop_rate.sleep();
  }
  return 0;
}






















