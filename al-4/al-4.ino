#include <MIDIUSB.h>

#define USE_ROTARY_ENCODER
#include <MIDI_Controller.h>

const uint8_t Channel = 1;
const uint8_t Controller1 = 0x16;
const uint8_t Controller2 = 0x17;
const uint8_t Controller3 = 0x18;
const uint8_t Controller4 = 0x19;
const int speedMultiply = 1;

USBDebugMIDI_Interface midiInterface(115200);

RotaryEncoder encoder1(3,  4,  Controller1, Channel, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder2(8,  7,  Controller2, Channel, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder3(A0, A1, Controller3, Channel, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder4(16, 14, Controller4, Channel, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
Digital button1(2,  60, Channel, 127);
Digital button2(9,  62, Channel, 127);
Digital button3(10, 64, Channel, 127);
Digital button4(15, 65, Channel, 127);

void setup() {}

void loop() {
  MIDI_Controller.refresh();
}
