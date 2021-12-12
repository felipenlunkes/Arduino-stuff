/*
   Piscar as luzes do arduino
 */
 
// O pino 13 é usado na maioria dos arduinos para simboizar os leds ou placas conectadas
// a ele. Então, definimos a variável led o valor da porta.
int led = 13;

// A função setup() é executada sempre após a inicialização.:
void setup() {                
  // Inicializa o modo digital.
  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   // Ativa o modo de voltagem baixa.
  delay(2000);               // Espera um segundo.
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);    // Desliga o led.
  delay(2000);               // Espera um segundo.
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
}
