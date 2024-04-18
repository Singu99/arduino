#include <Arduino.h>

#include <WiFi.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(17, OUTPUT); 
  // pinMode(13, ANALOG);
  WiFi.softAP("ESP32-AP", "123456789");

  // Print the IP address with printf
  printf("IP address: %s\n", WiFi.softAPIP().toString().c_str());
}


void loop() {
  // Toggle external led (pin 17)
  digitalWrite(LED_BUILTIN, HIGH);
}
