// Arduino ile 28BYJ-48 Stepper Motoru Kütüphane Kullanmadan Kontrol Etme

// Dijital pin bağlantıları
const int pin1 = 8;
const int pin2 = 9;
const int pin3 = 10;
const int pin4 = 11;

void setup() {
  // Dijital pinler çıkış olarak ayarlanır
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
  // Adım dizisi tanımlanır
  int steps[] = {1, 2, 4, 8};
  int numSteps = 4;

  // Saat yönünde dönüş yapar
  for (int i = 0; i < numSteps; i++) {
    setStep(steps[i]);
    delay(40);  // Adım arasında kısa bir gecikme
  }
}

// Tek bir adımı ayarlar
void setStep(int step) {
  switch (step) {
    case 1:
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, LOW);
      break;
    case 2:
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, LOW);
      break;
    case 4:
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, HIGH);
      digitalWrite(pin4, LOW);
      break;
    case 8:
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, HIGH);
      break;
  }
}
