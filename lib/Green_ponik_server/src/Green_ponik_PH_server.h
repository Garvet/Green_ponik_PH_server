#ifndef GREEN_PONIK_PH_SERVER_H
#define GREEN_PONIK_PH_SERVER_H

#include <Arduino.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>

#include <DFRobot_ESP_PH.h>
#include <ArduinoJson.h>

#include "index.h"
#define COUNTOF(a) (sizeof(a)/sizeof(a[0]))

#define ESPADC 4096.0   //the esp Analog Digital Convertion value
#define ESPVOLTAGE 3300 //the esp voltage supply value
#define PH_PIN 35       //the esp gpio data pin number

struct {
    StaticJsonDocument<120> json;
    WebServer *server;
    DFRobot_ESP_PH *ph;
} GP_PH_pointer;

class GP_PH_server {
private:
    bool create_PH = false; 
public:
    GP_PH_server() = default;
    ~GP_PH_server();
    GP_PH_server(WebServer *);
    void set_fun (WebServer *);
    GP_PH_server(WebServer *, DFRobot_ESP_PH *);
    void set_fun (WebServer *, DFRobot_ESP_PH *);
    void initialization();
};

#endif