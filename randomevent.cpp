#include <iostream>
#include <ctime>

int main() {

    std::string nama;
    int koin;

    std::cout << "Masukkan Nama Kamu: ";
    std::getline(std::cin, nama);
    std::cout << "Masukkan Jumlah Koin: ";
    std::cin >> koin;


    if(koin < 10){
        std::cout << nama << " Miskin Cari Uang Sana" << std::endl;
    }else{
        srand(time(NULL)); // Seed
        int nomor = (rand() % 6) + 1; // dadu rolling 1-6
     switch(nomor){
            case 1: std::cout << nomor << " Kamu Mendapatkan Dildo 5cm" << std::endl;
                    break;
            case 2: std::cout << nomor << " Zonk!" << std::endl;
                    break;
            case 3: std::cout << nomor << " Kamu Mendapatkan Iwak Tempik" << std::endl;
                    break;
            case 4: std::cout << nomor << " Kamu Mendapatkan Iwak Sapi" << std::endl;
                    break;
            case 5: std::cout << nomor << " Kamu Mendapatkan Kitab Rongawi" << std::endl;
                    break;
            case 6: std::cout << nomor << " Zonk!" << std::endl;
                    break;
    }
}
    return 0;
}