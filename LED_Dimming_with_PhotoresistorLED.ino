void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int   senorvalue = analogRead(A0);
    int value   = map(senorvalue,0,100,0,100);
    Serial.print("value==");
   Serial.println(value);
    Serial.print("senorvalue==");
   Serial.println(senorvalue);
   if(value>90){
     digitalWrite(13, LOW);
    }else{
      digitalWrite(13, HIGH);
    }

 
}
