#ifndef _MQTT_COMMON_H_
#define _MQTT_COMMON_H_

#include "esp-mdf2/components/mcommon/include/mdf_common.h"
#include "esp-mdf2/components/mwifi/include/mwifi.h"
#include "freertos/freertos.h"

#define MAC2STR(a)      (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACFSTR         "%02x:%02x:%02x:%02x:%02x:%02x"     // mac format string

static uint8_t hexstrtobyte(char* hex)
{
    char hex0 = hex[0];
    char hex1 = hex[1];
    uint8_t right = 0;
    uint8_t left = 0;
    if(hex0 >= '0' && hex0 <= '9')
        right = hex0 - '0';
    else if(hex0 >= 'a' && hex0<='f')
        right = hex0 - 'a' + 10;

    if(hex1 >= '0' && hex1 <= '9')
        left = hex1 - '0';
    else if(hex1 >= 'a' && hex1<='f')
        left = hex1 - 'a' + 10;

    return ((right<<4)|left);
}

void processMQTTRec(char* topic, char* body);

/*static void processMQTTRec(char* topic, char* body)
{
    char* wtadd = strstr(body, "WHITELIST_ADD")
    if(wtadd)
    {
        uint8_t macaddr mcadr[6];
        sscanf(mac, "%x:%x:%x:%x:%x:%x", &mcadr[0], &mcadr[1], &mcadr[2], &mcadr[3], &mcadr[4], &mcadr[5]);
        nvs_set_blob(nvshandle)
    }


    char mp[6][3];
    strncpy(mp[0], body, 2);
    strncpy(mp[1], body+3, 2);
    strncpy(mp[2], body+6, 2);
    strncpy(mp[3], body+9, 2);
    strncpy(mp[4], body+12, 2);
    strncpy(mp[5], body+15, 2);

    uint8_t macaddr2[6];
    for(int i =0; i<6; i++)
        macaddr2[i] = hexstrtobyte(mp[i]);

    ESP_LOGI("MR", MACFSTR, MAC2STR(macaddr2));
    ESP_LOGI("MS", "%c", body[18]);
    
    mwifi_data_type_t data_type = {0x0};
    mwifi_root_write(macaddr2, 1, &data_type, body+18, 1, false);
}*/

#endif
