/* http://romain-astouric.com/arduino-1-etude-et-prise-en-main-dun-fader-motorise/ */

int pin = 12;
float cm = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  int valeur_recup = 0;
  valeur_recup = analogRead(pin);
  cm = (valeur_recup*9.3/4095);
  Serial.print("la position du curseur (aka line track) est de: ");
  Serial.println(valeur_recup);
  Serial.print("Distance en cm : ");
  Serial.println(cm);
  Serial.println();
  delay(500);
}

/* vim: set tabstop=2: */
