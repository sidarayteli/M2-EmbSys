#include <dht.h>
#include <LiquidCrystal.h> 

#define dht_apin 8 
dht DHT;

int sensor_pin =8 ;    //digital pin connected to DHT11 temperature sensor
int output_value; // for soil moisture values
int D7_pin = 2;  //pin used to connect LCD
int D6_pin = 3;   //pin used to connect LCD
int D5_pin = 4;    //pin used to connect LCD
int D4_pin = 5;   //pin used to connect LCD
int EN_pin = 11;   //pin used to connect LCD
int RS_pin = 12;   //pin used to connect LCD
LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);
void setup(){
  pinMode(6,OUTPUT);//pin declared to blink led
  pinMode(7,OUTPUT);  //pin declared to blink led
  pinMode(9,OUTPUT);   // To relay
  pinMode(10,OUTPUT); // To relay

  Serial.begin(9600);
  
  pinMode(8,OUTPUT);// From DHT11 temperature sensor
  delay(500); //Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000); //Wait before accessing Sensor
 
  pinMode(A5, OUTPUT);  //From Soil moisture sensor
   delay(500);//Delay to let system boot
  Serial.println("soil moisture Sensor\n\n");
  delay(1000);//Wait before accessing Sensor

}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");// To print Humidity on serial monitor
    Serial.print(DHT.humidity);
    Serial.print("% \n");
    lcd.clear();
   lcd.setCursor(0,0);
          lcd.print("Humidity: ");// // To print Humidity on LCD
          lcd.print(DHT.humidity);
          lcd.print("% \n");
          delay(1000);
          
    
    Serial.print("Current temperature = "); // To print Temperature on serial monitor
    Serial.print(DHT.temperature); 
    Serial.println("C \n ");
    //lcd.clear();
    lcd.clear();
     lcd.setCursor(1,1);
          lcd.print("Temperature: ");//To print Temperature on LCD
          lcd.print(DHT.temperature);
          lcd.print("C \n");
          delay(1000);
          
    output_value= analogRead(sensor_pin);  
      
         //Serial.print("Soil Moisture = "); // To print Temperature on serial monitor
        // Serial.print(output_value);
        // Serial.println("% \n");
    lcd.clear();
          lcd.setCursor(2,2);
          lcd.print("SoilMoist: ");//To print Soil moisture on LCD
          lcd.print(output_value);
          lcd.print(" \n");
          delay(1000);
          

   if(output_value<=100 || DHT.temperature>=45)// Condition for Irrigation  if temp is>= threshold and soil moisture <= threshold then motor gets ON
     {
        
            digitalWrite(9,HIGH);//To ON Relay
            delay(5000);
        

             digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
              delay(1000);  
             digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
              delay(1000);              // wait for a second
             

     }
     else
     {
               digitalWrite(9,LOW);// OF Motor
                delay(5000);
              digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
              delay(1000);              // wait for a second
              digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
              delay(1000);  
     }
     
}
 
