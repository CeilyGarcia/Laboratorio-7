int sensorPin = A0;
int ledPin = 13;
int ledPin2 = 11;
int sensorValue;
int porcentaje;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); 
  pinMode(ledPin2, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
   sensorValue = analogRead(sensorPin);
   porcentaje = map(sensorValue, 0, 1023, 0, 100);
   Serial.print(sensorValue);
   Serial.print("   =   ");
   Serial.print(porcentaje);
   Serial.print("%");
   Serial.println();
   if (porcentaje < 50){
       digitalWrite(ledPin, sensorValue);
       digitalWrite(ledPin2, LOW);
   }
   else 
   {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, sensorValue);
   }
   
}
