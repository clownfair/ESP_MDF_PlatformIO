#ifndef MESHFUNC_H_
#define MESHFUNC_H_

#include "../src/esp-mdf2/components/mcommon/include/mdf_common.h"
#include "../src/esp-mdf2/components/mwifi/include/mwifi.h"
#include "../src/esp-mdf2/components/mespnow/include/mespnow.h"
#include "../src/esp-mdf2/components/mconfig/include/mconfig_chain.h"
#include "simpleHashTable.h"

#define MAC2STR(a)      (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACFSTR         "%02x:%02x:%02x:%02x:%02x:%02x"     // mac format string

#define MAX_NUM_NODES	10

#ifdef __cplusplus
 extern "C" {
#endif

void MeshCenterInit(void);
static mdf_err_t event_loop_cb(mdf_event_loop_t event, void *ctx);
static mdf_err_t wifi_init();
void master_netconf_begin(mwifi_config_t* config);

void updateNodeTableTask(void* pvParams);
void removeNodeFromTableTask(void* pvParams);
void root_write_task(void* pvparams);
static void root_read_task(void *arg);

void MeshCenterRecieveCbRegister(void(*)(uint8_t*, char*, int));

#ifdef __cplusplus
}
#endif

#endif