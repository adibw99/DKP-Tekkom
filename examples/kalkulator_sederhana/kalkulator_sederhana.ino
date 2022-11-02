#include <penjumlahan.h>

Kalkulator Calc;

void setup() {
  Serial.begin(115200);
  Serial.println("KALKULATOR SEDERHANA");   
  Serial.println("1. Penjumlahan");
  Serial.println("2. Pengurangan");
}

void loop() {
  Serial.print("Pilih Menu = ");

  while (Serial.available() == 0) {
  }

  int pilihanMenu = Serial.parseInt();
  Serial.println(pilihanMenu);

  switch (pilihanMenu) {
    case 1:
      // penjumlahan
      delay(3000);
      Serial.print("Masukkan Angka = ");
      int a = Serial.parseInt();
      Serial.println(a);
      delay(3000);
      Serial.print("Jumlahkan dengan Angka = ");
      int b = Serial.parseInt();
      Serial.println(b);
      delay(3000);
      int hasilJumlah = Calc.penjumlahan(a,b);
      Serial.print("Hasil Penjumlahan = ");
      Serial.println(hasilJumlah);
      break;

    case 2:
      //pengurangan
      Serial.print("Masukkan Angka = ");
      int c = Serial.parseInt();
      Serial.print("Kurangkan dengan Angka = ");
      delay(3000);
      int d = Serial.parseInt();
      int hasilKurang = Calc.pengurangan(c,d);
      delay(3000);
      Serial.print("Hasil Pengurangan = ");
      Serial.println(hasilKurang);
      break;

    case 3:
      Serial.println("Pilih Menu Valid!!");
      break;
  }
}