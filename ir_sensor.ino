void setup() {
  // put your setup code here, to run once:
  pinMode(10,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(10));
  if(digitalRead(10)==HIGH){
    digitalWrite(2,HIGH);
  } else{
  
    digitalWrite(2,LOW);
  }
}


