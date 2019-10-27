#include <Arduino.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>

WebServer server(80);
const char* ssid = "Green_ponik";
#define IP_S IPAddress(192, 168, 4, 255)
IPAddress ip_serv(192, 168, 4, 1);

#include <Green_ponik_PH_server.h>
GP_PH_server gp_server;

void setup() {
    WiFi.config(ip_serv, IP_S, IPAddress(255, 255, 255, 0), ip_serv);
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid);
    gp_server.set_fun(&server);
}

void loop() {
    server.handleClient();
}