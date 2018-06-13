#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "ROPOD_4Wheel_Tdistkinb_cntr_node";

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/Platform vel command/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist> Sub_ROPOD_4Wheel_Tdistkinb_cntr_node_1899;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry publisher/Publish
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_nav_msgs_Odometry> Pub_ROPOD_4Wheel_Tdistkinb_cntr_node_1896;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter14
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Controllers conf/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter14
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter15
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter16
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter17
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239;

// For Block ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

