#ifndef _MQTT_FUNCTIONS_H_
#define _MQTT_FUNCTIONS_H_

#include "esp-mdf2/components/mcommon/include/mdf_common.h"
#include "esp-mdf2/components/mwifi/include/mwifi.h"

#include "lwip/api.h"
#include "lwip/sockets.h"
#include "lwip/dns.h"

#include "freertos/timers.h"

//#include "../components/pahoMQTT/MQTTClient.h"

#include "esp_tls.h"

void TCPConnect(void);
void mqttRecHandler(MessageData* msgdata);
void mqttTask(void* pvParams);
void publishTask(void* pvParams);

#endif