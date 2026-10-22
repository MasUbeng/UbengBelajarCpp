#include <iostream>

// Loop dengan jumlah waktu yang terbatas
// Pengulangan terstruktur
int main(){

    /*std::string teks;
    int jumlah;
    std::cout << "Masukkan Teks: ";
    std::getline(std::cin, teks);
    std::cout << "Mau Loop Berapa Kali? ";
    std::cin >> jumlah;
    for(int index = 1; index <= jumlah; index++){
        std::cout << index << teks << '\n';
    }
    std::cout << "Ah Capek Ah\n";*/

    for(int i = 1; i <= 9; i++){
        if(i == 4){
            continue;
        }
        std::cout << i << '\n';
    }

    std::cout << "Lift Kampus Njirr";

    return 0;
}