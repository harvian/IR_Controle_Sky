/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

int RECV_PIN = A0;
boolean pin2 = LOW;
boolean pin3 = LOW;
boolean pin4 = LOW;
boolean pin5 = LOW;
boolean pin6 = LOW;
boolean pin7 = LOW;
boolean pin8 = LOW;
boolean pin9 = LOW;
boolean pin10 = LOW;
boolean pin11 = LOW;
int valpwm = 20;


IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC);
    irrecv.resume(); // Receive the next value
    
    switch(results.value){
      case 1643397311:
        if(pin2 == LOW){
          pin2 = HIGH;
          digitalWrite(2, HIGH);
          }else{
            pin2 = LOW;
            digitalWrite(2, LOW);            
          }
        break;
        
      case 1643431991:
        if(pin3 == LOW){
          pin3 = HIGH;
          digitalWrite(3, HIGH);
          }else{
            pin3 = LOW;
            digitalWrite(3, LOW);            
          }
        break;
        
      case 1643393231:
        if(pin4 == LOW){
          pin4 = HIGH;
          digitalWrite(4, HIGH);
          }else{
            pin4 = LOW;
            digitalWrite(4, LOW);            
          }
        break;
        
      case 1643407511:
        if(pin5 == LOW){
          pin5 = HIGH;
          digitalWrite(5, HIGH);
          }else{
            pin5 = LOW;
            digitalWrite(5, LOW);            
          }
        break;
        
      case 1643391191:
        if(pin6 == LOW){
          pin6 = HIGH;
          digitalWrite(6, HIGH);
          }else{
            pin6 = LOW;
            digitalWrite(6, LOW);            
          }
        break;
        
      case 1643440151:
        if(pin7 == LOW){
          pin7 = HIGH;
          digitalWrite(7, HIGH);
          }else{
            pin7 = LOW;
            digitalWrite(7, LOW);            
          }
        break;
        
      case 1643387111:
        if(pin8 == LOW){
          pin8 = HIGH;
          digitalWrite(8, HIGH);
          }else{
            pin8 = LOW;
            digitalWrite(8, LOW);            
          }
        break;
        
      case 1643425871:
        if(pin9 == LOW){
          pin9 = HIGH;
          digitalWrite(9, HIGH);
          }else{
            pin9 = LOW;
            digitalWrite(9, LOW);            
          }
        break;
        
      case 1643419751:
        if(pin10 == LOW){
          pin10 = HIGH;
          digitalWrite(10, HIGH);
          }else{
            pin10 = LOW;
            digitalWrite(10, LOW);            
          }
        break;
        
      case 1643409551:
        if(pin11 == LOW){
          pin11 = HIGH;
          digitalWrite(11, HIGH);
          }else{
            pin11 = LOW;
            digitalWrite(11, LOW);            
          }
        break;
    }
    
  }
}
