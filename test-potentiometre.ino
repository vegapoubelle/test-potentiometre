/* http://romain-astouric.com/arduino-1-etude-et-prise-en-main-dun-fader-motorise/ */

int pin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  int valeur_recup = 0;
  valeur_recup = analogRead(pin);
  Serial.print("la position du curseur (aka line track) est de: ");
  Serial.println(valeur_recup);
}

/* vim: set tabstop=2: */
