// Sabitlerin tanımlanması
const int buttonPin = 2; // Düğme pini
const int ledPin = 3;    // LED pini

// Değişkenlerin tanımlanması
int buttonState = 0;     // Düğme durumu

void setup() {
  pinMode(ledPin, OUTPUT);      // LED pini çıkış olarak ayarlanır
  pinMode(buttonPin, INPUT);    // Düğme pini giriş olarak ayarlanır
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Düğme durumu okunur

  if (buttonState == HIGH) {   // Düğme basıldıysa
    digitalWrite(ledPin, HIGH);  // LED'i aç
  } else {                    // Düğme basılı değilse
    digitalWrite(ledPin, LOW);   // LED'i kapat
  }
}
