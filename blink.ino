#include "env.h"

extern "C" {
  #include "blink.h"
}

void blc_blink_activateLED() {
  digitalWrite(LED_BUILTIN, HIGH);
}

void blc_blink_deactivateLED() {
  digitalWrite(LED_BUILTIN,  LOW);
}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  blc_blech_blink_init();
}

void loop() {
  blc_blech_blink_tick();

  delay(MILLIS_PER_TICK);

}
