int led=3;
int led2=4;
int led3=5;

void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);
 Serial.println ("Inicializando Programa");
 Serial.println("Setting pin 3 as output");
 pinMode (led, OUTPUT);
 pinMode (led2, OUTPUT);
 pinMode (led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("ON");
 digitalWrite(led,HIGH);
 delay (250);
 Serial.println("ON");
 digitalWrite(led2,HIGH);
 delay (250);
 Serial.println("ON");
 digitalWrite(led3,HIGH);
 delay (250);
 
 Serial.println("OFF");
 digitalWrite (led, LOW);
 delay(250);
 Serial.println("OFF");
 digitalWrite (led2, LOW);
 delay(250);
 Serial.println("OFF");
 digitalWrite (led3, LOW);
 delay(250);
}
