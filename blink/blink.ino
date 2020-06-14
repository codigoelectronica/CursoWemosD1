 /**
 * http://codigoelectronica.com/blog/wemos-d1-blink
 * 
 * Autor: Oscar Fernandez Alzate, twitter: @OscarDevOps
 * Código Electrónica @codelectronica
 */
int led = D13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
