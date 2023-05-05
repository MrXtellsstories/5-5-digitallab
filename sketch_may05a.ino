void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int   senorvalue = analogRead(A0);
    int value   = map(senorvalue,0,1023,0,500);
   Serial.println(value);
   digitalWrite(13, HIGH);
   delay(value);
   digitalWrite(13, LOW);
   delay(value);
}
