#include <Kalkulator.h>

Kalkulator Calc;

void setup(){
    Serial.begin(115200);
    int hasilJumlah = Calc.penjumlahan(10,12);
    Serial.println(hasilJumlah);
    delay(1000);
    int hasilKurang = Calc.penjumlahan(10,12);
    Serial.println(hasilKurang);
    delay(1000);
}

void loop(){

}