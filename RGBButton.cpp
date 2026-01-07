// ------------------------------
// BUTON – LED KONTROL PROGRAMI
// Her buton kendi LED’ini kontrol eder
// Butona basılıyken LED söner
// Buton bırakılınca LED yanar
// ------------------------------

// --- BUTON PIN TANIMLARI ---
int kirmizibuton = 13;   // Kırmızı buton Arduino 13. pine bağlı
int yesilbuton   = 12;   // Yeşil buton Arduino 12. pine bağlı
int mavibuton    = 11;   // Mavi buton Arduino 11. pine bağlı

// --- LED PIN TANIMLARI ---
int kirmiziled = 7;      // Kırmızı LED Arduino 7. pine bağlı
int yesilled   = 6;      // Yeşil LED Arduino 6. pine bağlı
int maviled    = 5;      // Mavi LED Arduino 5. pine bağlı

// --- BUTON DURUMLARINI TUTAN DEĞİŞKENLER ---
int kirmizidurum = 0;    // Kırmızı butonun durumu (HIGH / LOW)
int yesildurum   = 0;    // Yeşil butonun durumu
int mavidurum    = 0;    // Mavi butonun durumu

// ------------------------------
// SETUP: Arduino açıldığında
// SADECE BİR KEZ çalışır
// ------------------------------
void setup() {

  // Butonlar giriş (INPUT) olarak ayarlanır
  pinMode(kirmizibuton, INPUT);
  pinMode(yesilbuton, INPUT);
  pinMode(mavibuton, INPUT);

  // LED’ler çıkış (OUTPUT) olarak ayarlanır
  pinMode(kirmiziled, OUTPUT);
  pinMode(yesilled, OUTPUT);
  pinMode(maviled, OUTPUT);
}

// ------------------------------
// LOOP: Arduino çalıştığı sürece
// SÜREKLİ tekrar eder
// ------------------------------
void loop() {

  // -------- KIRMIZI BUTON & LED --------
  kirmizidurum = digitalRead(kirmizibuton); // Kırmızı buton okunur

  if (kirmizidurum == HIGH) {
    // Eğer butona basılıysa
    digitalWrite(kirmiziled, LOW); // LED söner
  } 
  else {
    // Eğer butona basılı değilse
    digitalWrite(kirmiziled, HIGH); // LED yanar
  }

  // -------- YEŞİL BUTON & LED --------
  yesildurum = digitalRead(yesilbuton); // Yeşil buton okunur

  if (yesildurum == HIGH) {
    digitalWrite(yesilled, LOW); // LED söner
  } 
  else {
    digitalWrite(yesilled, HIGH); // LED yanar
  }

  // -------- MAVİ BUTON & LED --------
  mavidurum = digitalRead(mavibuton); // Mavi buton okunur

  if (mavidurum == HIGH) {
    digitalWrite(maviled, LOW); // LED söner
  } 
  else {
    digitalWrite(maviled, HIGH); // LED yanar
  }
}
