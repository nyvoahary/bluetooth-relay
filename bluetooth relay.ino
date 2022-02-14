char Incoming_value = 'a';
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//Pin 2 and 3 are just a test
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
    {
      Incoming_value = Serial.read();
      Serial.print(Incoming_value);
      Serial.print("/n");
      if (Incoming_value == 'A'){
        Serial.println("3LOW");
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
      }
      else if(Incoming_value == 'a'){
        Serial.println("3LOW");
        digitalWrite(3,HIGH);
        digitalWrite(2,LOW);
      }        
    }
}
