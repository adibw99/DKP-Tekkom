#include <penjumlahan.h>

Kalkulator Calc;

void setup(){
    Serial.begin(115200);
    int hasilJumlah = Calc.penjumlahan(10,12);
    Serial.print("Hasil Penjumlahan = ")
    Serial.println(hasilJumlah);
    delay(1000);
    int hasilKurang = Calc.pengurangan(10,12);
    Serial.print("Hasil Pengurangan = ")
    Serial.println(hasilKurang);
    delay(1000);
}

void loop(){

}