#include <penjumlahan.h>

Kalkulator Calc;

void setup() {
  Serial.begin(115200);
  Serial.println("KALKULATOR SEDERHANA");   
  Serial.println("1. Penjumlahan");
  Serial.println("2. Pengurangan");
}

void loop() {
  Serial.println("Pilih Menu = ");

  while (Serial.available() == 0) {
  }

  int pilihanMenu = Serial.parseInt();

  switch (pilihanMenu) {
    case 1:
      // penjumlahan
      Serial.print("Masukkan Angka = ");
      int a = Serial.parseInt();
      Serial.print("Jumlahkan dengan Angka = ");
      int b = Serial.parseInt();
      int hasilJumlah = Calc.penjumlahan(a,b);
      Serial.print("Hasil Penjumlahan = ");
      Serial.println(hasilJumlah);
      break;

    case 2:
      //pengurangan
      Serial.print("Masukkan Angka = ");
      int a = Serial.parseInt();
      Serial.print("Kurangkan dengan Angka = ");
      int b = Serial.parseInt();
      int hasilJumlah = Calc.pengurangan(a,b);
      Serial.print("Hasil Pengurangan = ");
      Serial.println(hasilJumlah);
      break;

    default:
      Serial.println("Please choose a valid selection");
  }
}