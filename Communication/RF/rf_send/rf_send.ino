/*
SimpleSend
This sketch transmits a short text message using the VirtualWire library
connect the Transmitter data pin to Arduino pin 12
*/
#include <VirtualWire.h>
void setup(){
// Initialize the IO and ISR
vw_setup(2000); // Bits per sec
}//setup

void loop(){
send("Hello there");
delay(1000);
}//loop

void send (char *message){
vw_send((uint8_t *)message, strlen(message));
vw_wait_tx(); // Wait until the whole message is gone
}//send

