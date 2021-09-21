int a=4;
char value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(a,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0){
    value=Serial.read();
    Serial.println(value);
if(value=='2'){
  digitalWrite(4,LOW);
}
if(value=='1'){
  digitalWrite(4,HIGH);
}
 }
}
