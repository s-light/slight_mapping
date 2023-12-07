/******************************************

    slight_mapping__minimal.ino
        minimal example for library usage.
        debugport: serial interface 115200baud

    hardware:
        Arduino board of any type.
        LED_BUILTIN

    libraries used:
        ~ slight_mapping

    written by stefan krueger (s-light),
        git@s-light.eu, http://s-light.eu, https://github.com/s-light/

    This Example Sketch is released as CC0
******************************************/

#include <slight_mapping.h>

void setup() {
    delay(1000);
    Serial.begin(115200);
    delay(500);
    Serial.println();

    Serial.println(F("slight_mapping__minimal.ino sketch."));
    Serial.println(F("minimal example for library usage."));

    // pinMode(LED_BUILTIN, OUTPUT);
    // digitalWrite(LED_BUILTIN, HIGH);


    // TODO: write example for mapping usage..
}

void loop() {
}
