#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#define PI 3.14159265358979323846
 
int main(int argc, char **argv){
  ros::init(argc, argv, "draw_rectangle");   
  std::string topic = "/turtle1/cmd_vel"; 
  ros::NodeHandle n;
  ros::Publisher cmdVelPub = n.advertise<geometry_msgs::Twist>(topic, 1);
  
  ros::Rate loopRate(2);
  
  ROS_INFO("draw_retangle start...");
  geometry_msgs::Twist speed; 

  int count = 0;
  while (ros::ok()){
    speed.linear.x = 1; // 设置线速度为1m/s，正为前进，负为后退
    speed.linear.y = 0;
    speed.linear.z = 0;
    speed.angular.x = 0;
    speed.angular.y = 0;
    speed.angular.z = 0; 
    count++;
    while(count == 5)
    {
        count=0;
        speed.angular.z = PI; //转90°
    }
    cmdVelPub.publish(speed); 
    ros::spinOnce();
    loopRate.sleep();
  }
 
  return 0;
}
