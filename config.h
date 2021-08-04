// Max Number of devices monitored
const int MAX_DEVICES = 20;

// Max duration of BLE scan (in seconds)
const int BLE_SCAN_DURATION = 15;

// sleep between to runs in seconds
#define SLEEP_DURATION 360 * 60
// emergency hibernate countdown in seconds
#define EMERGENCY_HIBERNATE 30 * 60
// how often should the battery be read - in run count
#define BATTERY_INTERVAL 6
// how often should a device be retried in a run when something fails
#define RETRY 4

const char* WIFI_SSID = "WLAN SSID";
const char* WIFI_PASSWORD = "WLAN Password";

// MQTT topic gets defined by "<MQTT_BASE_TOPIC>/<MAC_ADDRESS>/"
// where MAC_ADDRESS is one of the values from FLORA_DEVICES array
// property is either temperature, moisture, conductivity, light or battery

const char* MQTT_HOST = "MQTT_IP";
const int MQTT_PORT = 1883;
const char* MQTT_CLIENTID = "miflora";
const char* MQTT_USERNAME = "BLE";
const char* MQTT_PASSWORD = "BLE";
const String MQTT_BASE_TOPIC = "flora";
const int MQTT_RETRY_WAIT = 5000;
