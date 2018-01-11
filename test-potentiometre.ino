/* http://romain-astouric.com/arduino-1-etude-et-prise-en-main-dun-fader-motorise/ */

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int valeur_recup = 0;
  valeur_recup = analogRead(2);
  Serial.print("la position du curseur (aka line track) est de ");
  Serial.println(valeur_recup);
}

