int LED = A1;          //Red LED
int LED1 = A3;         //Green LED
int gas_pin = A0;       // For Gas Sensor
int buzzer_pin = A2;   // For Buzzer



void setup() 
{
  Serial.begin(9600);
  pinMode (buzzer_pin, OUTPUT);
  pinMode (gas_pin, INPUT);
}

void loop() {
  	float sensorValue,gas_pin;
	sensorValue = analogRead(gas_pin); // read analog input pin 0


  if(sensorValue >= 300)
  {  
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,LOW);

    digitalWrite (buzzer_pin, HIGH);
    //Serial.println();
    Serial.print(sensorValue);
    Serial.println(" |SMOKE DETECTED|");     
  }
  
  else
  {
  	digitalWrite(LED,LOW);
    digitalWrite(LED1,HIGH);
    
    digitalWrite (buzzer_pin, LOW);
    Serial.println();
    Serial.println("Sensor Value: ");
    Serial.print(sensorValue);
    //Serial.print(" |Safe Mode|");
  } 
 
  delay(1000);

}
	
