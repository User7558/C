void setup() {
  pinMode(13, OUTPUT); //output=saída, input=entrada
}

void loop() {
  digitalWrite(13,HIGH); //high=ligada, low=desligada
  delay(3000); //espera definida em milisegundos 
  digitalWrite(13, LOW);
  delay(3000);
}
