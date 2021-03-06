#include <IRremote.h>

int RECV_PIN = 50;
int led1 = 39;
int led2 = 38;
int led3 = 37;
int led4 = 36;
int led5 = 35;
int led6 = 34;
int led7 = 33;
int led8 = 32;
int led9 = 31;
int led10 = 30;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }

  if(results.value == 0xF7C03F){
  digitalWrite(led1, HIGH); 
  }
  
  if(results.value == 0xF740BF){
  digitalWrite(led1, LOW); 
  }

   if(results.value == 0xF700FF){
  digitalWrite(led2, HIGH); 
  }

   if(results.value == 0xF7807F){
  digitalWrite(led2, LOW); 
  }
                                                                                                                                                                                     
   if(results.value == 0xF720DF){
  digitalWrite(led3, HIGH); 
  }

   if(results.value == 0xF7A05F){
  digitalWrite(led3, LOW); 

  }

   if(results.value == 0xF7609F){
  digitalWrite(led4, LOW); 
  }

   if(results.value == 0xF7E01F){
  digitalWrite(led4, HIGH); 
  }

   if(results.value == 0xF710EF){
  digitalWrite(led5, HIGH); 
  }

   if(results.value == 0xF7906F){
  digitalWrite(led5, LOW); 
  }

   if(results.value == 0xF750AF){
  digitalWrite(led6, LOW); 
  }

   if(results.value == 0xF7D02F){
  digitalWrite(led6, HIGH); 
  }

 if(results.value == 0xF730CF){
  digitalWrite(led7, HIGH); 
  }

   if(results.value == 0xF7B04F){
  digitalWrite(led7, LOW); 
  }

   if(results.value == 0xF7708F){
  digitalWrite(led8, LOW); 
  }

   if(results.value == 0xF7F00F){
  digitalWrite(led8, HIGH); 
  }

   if(results.value == 0xF708F7){
  digitalWrite(led9, HIGH); 
  }

   if(results.value == 0xF78877){
  digitalWrite(led9, LOW); 
  }

   if(results.value == 0xF748B7){
  digitalWrite(led10, LOW); 
  }

   if(results.value == 0xF7C837){
  digitalWrite(led10, HIGH); 
  }
}
