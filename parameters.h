// Parameter file for tft WeatherApp sketch

// Select only one of both lines
#define DEBUG Serial.println      // for echo on Serial interface
//#define DEBUG                   // for no debug echo on Serial interface

#define TFT_BL 15  // Back light pin for AZ-Touch MOD
#define HAVE_TOUCHPAD
#define TOUCH_CS 14 // SPI
#define TOUCH_IRQ 27 // Needed to enable wake-ups etc. (pin2 for AZ-ESP)

/// Thermostat parameters
#define MIN_TEMPERATURE 15
#define MAX_TEMPERATURE 25  
enum { BOOT, COLD, COOL, COMFORT, WARM, HOT };  // Thermostat modes
enum { NOSUN, SUNSTOCK, SUNPOOL, SUNPOOLSTOCK, SUNPOOLBOILER }; // Solar panel modes TODO

#define WEATHER_INTERVAL 30       // read weather data every xx minutes

// char arrays for connecting to the wifi
// Replace with your SSID and password details
char ssid[] = "wifi_ssid"; // your_wifi_network_name
char pass[] = "wifi_password"; // your_wifi_network_password

// Define weekdays and months in your language // TODO add support for accents
//String daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
String daysOfWeek[7] = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Thursday", "Friday", "Saturday"};
//String monthNames[12] = {"January", "February", "March, "April", "May", "June", "July", "August ", "September", "October", "November", "December"};
String monthNames[12] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};

