#include"nama.h";

Nama::Nama(char nama_kamu){
    Serial.print("Adib");
    Serial.print(nama_kamu);
}

void Nama::perkenalan(){
    Serial.println("Nama Saya Adalah "+nama_kamu);
}
