/*Marcus Krutto */
int a = 6;
int b = 5;
int c = 2;
int d = 3;
int e = 4;
int f = 7;
int g = 8;
int reply;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  chooseNum();
  
}
void two()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
}
void three()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
}
void four()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
}
void five()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
}
void six()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
}
void seven()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
}
void eight()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
  delay(1000);
}
void nine()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
}
  void one()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
}
void chooseNum() {
  int randNum = random(1,7);
  Serial.begin(9600);
  Serial.println(randNum);
    
    if (randNum == 1) {
      one();
    }
    
    if (randNum == 2) {
      two();
    }
    
    if (randNum == 3) {
      three();
    }
    
    if (randNum == 4) {
      four();
    }
    
    if (randNum == 5) {
      five();
    }
    
    if (randNum == 6) {
      six();
    }
}
void loop(){
  Serial.begin(9600);
	chooseNum();
	Serial.print("Kontroll, kas kood tootab.");
	delay(2000);
}
