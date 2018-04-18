/* http://romain-astouric.com/arduino-1-etude-et-prise-en-main-dun-fader-motorise/ */

float cm = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valeur_recup = 0;
  valeur_recup = analogRead(A5);
  //cm = (valeur_recup*9.3/4095);
  Serial.print("la position du curseur (aka line track) est de: ");
  Serial.println(valeur_recup);
  Serial.print("Distance en cm : ");
  Serial.println(cm);
  Serial.println();
  delay(500);
}

/* vim: set ts=2 sw=2 et : */
