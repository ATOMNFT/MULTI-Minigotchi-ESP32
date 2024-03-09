///////////////////////////////////////////
// config.h: header files for config.cpp //
///////////////////////////////////////////

#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <string>

class Config {
public:
    Config();
    static bool deauth;
    static bool advertise; 
    static int baud;
    static std::string whitelist[10]; 
    static int channels[3];
    static const char* bssid;
    static int channel;
    
private:

};

#endif // CONFIG_H