#include <Arduino.h>
//#include "include/includes.h" //includes needed for mesh to work

//void mesh_recieve_callback(uint8_t* macaddr, char* msg, int len);

void setup() {
  // put your setup code here, to run once:
  /*esp_log_level_set("*", ESP_LOG_INFO);
  ESP_LOGI("JJ", "YY");*/
  gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
  gpio_set_level(GPIO_NUM_2, 1);
  //MeshCenterInit();
  //MeshCenterRecieveCbRegister(mesh_recieve_callback);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

/*void mesh_recieve_callback(uint8_t* macaddr, char* msg, int len)
{
    printf("%02x:%02x:%02x:%02x:%02x:%02x said: %s\r\n", macaddr[0], macaddr[1], macaddr[2], macaddr[3], macaddr[4],
              macaddr[5], msg);
}*/