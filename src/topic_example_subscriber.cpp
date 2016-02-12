#include "ros/ros.h"
#include "topic_example/myMessage.h"

void msgCallback(const topic_example::myMessage::ConstPtr& msg)
{
	ROS_INFO("recieve msg: %d",msg->data);
}

int main(int argc,char **argv){
	ros::init(argc,argv,"topic_example_subscriber");
	ros::NodeHandle nh;

	ros::Subscriber sub=nh.subscribe("topic_example_msg",100,msgCallback);

	ros::spin();

	return 0;

}