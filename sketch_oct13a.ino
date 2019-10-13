
int led = 6;
int pir = 5;
int pir2 = 3;
int pir3 = 2;
int pir4 = 1;
int pir5 = 7;
int buzzer = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  pinMode(pir2, INPUT);
  pinMode(pir3, INPUT);
  pinMode(pir4, INPUT);
  pinMode(pir5, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(catchPin, OUTPUT);
}
void loop()
{
  if(digitalRead(pir)== HIGH or digitalRead(pir2) == HIGH or digitalRead(pir3)== HIGH or digitalRead(pir4) == HIGH or digitalRead(pir5)== HIGH)
    {
      Serial.println("Object Detected");
      digitalWrite(led, HIGH);
      analogWrite(buzzer, 200);
      digitalWrite(catchPin, HIGH);
    } 
 else
  {
    Serial.println("No Object Detected");
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(catchPin, LOW);
  }
   delay(1000);
}
