#include "Green_ponik_PH_server.h"


void handleRoot() {
    GP_PH_pointer.server->send(200, "text/html", MAIN_page);
}

void handleNotFound() {
    GP_PH_pointer.server->send(404, "text/html", ERR_page);
}

void get_ph() {
    char buf[120];
    char str[12];
    
    float temperature = 25; //temperature = readTemperature(); 
    float voltage = analogRead(PH_PIN) / ESPADC * ESPVOLTAGE;
    float ph_value = GP_PH_pointer.ph->readPH(voltage, temperature);

    snprintf_P(str, COUNTOF(str), PSTR("%2.4f"), voltage);
    GP_PH_pointer.json["DFRobot_PH"]["voltage"] = str;

    snprintf_P(str, COUNTOF(str), PSTR("%2.2f C"), temperature);
    GP_PH_pointer.json["DFRobot_PH"]["temperature"] = str;

    snprintf_P(str, COUNTOF(str), PSTR("%2.4f"), ph_value);
    GP_PH_pointer.json["DFRobot_PH"]["pH"] = str;

    serializeJsonPretty(GP_PH_pointer.json, buf);
    GP_PH_pointer.server->send(200, "text/html", buf);
    GP_PH_pointer.json.clear();
}


void GP_PH_server::initialization() {
    GP_PH_pointer.server->on("/", handleRoot);
    GP_PH_pointer.server->on("/get_ph", get_ph);
    GP_PH_pointer.server->onNotFound(handleNotFound);
    GP_PH_pointer.server->begin();
}


GP_PH_server::GP_PH_server(WebServer *new_server, DFRobot_ESP_PH *new_PH) {
    GP_PH_pointer.server = new_server;
    GP_PH_pointer.ph = new_PH;
}

void GP_PH_server::set_fun(WebServer *new_server, DFRobot_ESP_PH *new_PH){
    GP_PH_pointer.server = new_server;
    GP_PH_pointer.ph = new_PH;
    initialization();
}

GP_PH_server::GP_PH_server(WebServer *new_server) {
    GP_PH_pointer.server = new_server;
    GP_PH_pointer.ph = new DFRobot_ESP_PH;
    GP_PH_pointer.ph->begin();
    create_PH = true;
}

void GP_PH_server::set_fun(WebServer *new_server){
    GP_PH_pointer.server = new_server;
    GP_PH_pointer.ph = new DFRobot_ESP_PH;
    GP_PH_pointer.ph->begin();
    create_PH = true;
    initialization();
}

GP_PH_server::~GP_PH_server() {
    if (create_PH && GP_PH_pointer.ph != nullptr)
        delete GP_PH_pointer.ph;
}