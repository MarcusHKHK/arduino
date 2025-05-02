// Juhendi sain siit: https://projecthub.arduino.cc/DCamino/ambient-light-sensor-using-photo-resistor-and-led-lights-79c2ed
// Tinkercad: https://www.tinkercad.com/things/84jQUxI49y4/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits
int light = 0; // Praegune tule väärtus

void setup() { // Koodi seadistus
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void  loop() { // Tule sisse/välja lülitamine
    light = analogRead(A0);
    Serial.println(light);
    if(light > 450) { // Tuvastab kas on valge
        Serial.println("Praegu on piisavalt valge!");
        digitalWrite(13,LOW);
    }
    else { // Tuvastab kas on pime
        Serial.println("Kes tuled ära kustudas?");
        digitalWrite(13,HIGH);
    }
    delay(1000);
}
