
idf_component_register(SRCS "MQTT_functions.c" "centralnode.c" "SIM800.c" "MQTT_common.c"
                    INCLUDE_DIRS ""
                    REQUIRES mcommon mconfig mwifi mlink "esp-tls"
)
