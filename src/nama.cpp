#include"nama.h";

Nama::Nama(char nama_kamu){
    String nama_kamu = "Adib";
    Serial.print(nama_kamu);
}

void Nama::perkenalan(){
    Serial.println("Nama Saya Adalah "+nama_kamu);
}
