int ledPin = 2;

void setup(){
	pinMode(ledPin, OUTPUT);
	Serial.begin(9600);
}

void loop(){
	if(Serial.avilable() > 0) {
		char command = Serial.read();
		if(command == '1') {
			digitalWrite(ledPin, HIGH);
			Serial.println("Turn led on");
		}
		else if(command == '0') {
			digitalWrite(ledPin, LOW);
			Serial.println("Turn led off");
		}
	}
}