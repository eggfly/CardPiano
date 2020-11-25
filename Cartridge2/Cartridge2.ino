#include "MyCartridge.h"
#include "vgm_arduino.h"

const uint8_t PULSE_1_PIN  = 33;
const uint8_t PULSE_2_PIN  = 32;
const uint8_t NOISE_PIN    = 25;
const uint8_t TRIANGLE_PIN = 26;

Cartridge cart(PULSE_1_PIN, PULSE_2_PIN, NOISE_PIN, TRIANGLE_PIN);

void setup() {
  Serial.begin(115200);
  cart.init();
  // cart.frame_counter_cb(test_func);
}

void loop() {
  cart.play_nes(teleporting);
  delay(1000);
  cart.play_nes(swimming);
  delay(1000);
  cart.play_nes(Bowser_s_Castle_Hurry);
  delay(1000);
  cart.play_nes(battle_city_1);
  delay(1000);
  cart.play_nes(battle_city_2);
  delay(1000);
  cart.play_nes(battle_city_3);
  delay(1000);
  cart.play_nes(jumping);
  delay(1000);
  cart.play_nes(saving);
  delay(1000);
  //  cart.play_nes(The_Legend_of_Zelda);
  //  delay(1000);
  //  cart.play_nes(Introduction);
  //  delay(1000);
  // yield();
}

void test_func() { // Called every "1st step" of the NES' Frame Counter during playback
  Serial.println(millis());
}
