// Example by Tom Igoe

import processing.serial.*;

Serial myPort;  // The serial port
String val;
String current;
String stable;

void setup() {
  size(300,300);
  // List all the available serial ports
  println(Serial.list());
  // Open the port you are using at the rate you want:
  myPort = new Serial(this, Serial.list()[0], 9600);
}

void draw() {
  
  if(val!=null){
    current = val;
  } else {
    current = stable;
  }//if
  
  
  if(val!=null){
    int[] num = int(split(current,","));
    rectMode(CENTER);
    fill(0);
    translate(25,20);
    background(255);
    rect(num[1],num[0],30,30);
  }//if
  if ( myPort.available() > 0) {  // If data is available,
    if(val!=null){
      stable = val;
    }//if
    val = myPort.readStringUntil('\n');         // read it and store it in val
  }//if
println(val); //print it out in the console
}//draw
