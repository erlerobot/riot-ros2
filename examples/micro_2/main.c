// #include <rclc/rclc.h>
// #include <std_msgs/msg/string.h>

#include <stdio.h>
// TODO: use ifdef to restrict this code only for NuttX OS, do not include it
// for Linux or others
#include <nuttx/config.h>

int ros_main(void)
{
  // static int argc = 0;
  // static char **argv = NULL;
  //
  // rclc_init(argc, argv);
  // rclc_node_t* node = rclc_create_node("talker", "");
  // rclc_publisher_t* pub = rclc_create_publisher(node, RCLC_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String), "chatter", 1);
  //
  // std_msgs__msg__String msg;
  // char buff[64] = {0};
  // msg.data.data = buff;
  // msg.data.capacity = sizeof(buff);
  // msg.data.size = 0;
  //
  // int i = 1;
  //
  // while (rclc_ok()) {
  //   msg.data.size = snprintf(msg.data.data, msg.data.capacity, "Hello World: %i", i++);
  //   if(msg.data.size > msg.data.capacity) msg.data.size = 0;
  //
  //   if(msg.data.data[msg.data.size] == '\0') {
  //     printf("Publishing: '%s'\n", msg.data.data);
  //   }
  //
  //   rclc_publish(pub, (const void*)&msg);
  //
  //   rclc_spin_node_once(node, 100);
  // }
  //
  // rclc_destroy_publisher(pub);
  // rclc_destroy_node(node);
  printf("Hello, micro-ROS!!\n");
  return 0;
}
