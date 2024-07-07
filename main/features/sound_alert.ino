#define BUZZER_PIN 9

void soundAlert() {
  pinMode(BUZZER_PIN, OUTPUT);
  if (/*enemy detected*/) {
    tone(BUZZER_PIN, 1000, 500); // Alert sound
  }
}
