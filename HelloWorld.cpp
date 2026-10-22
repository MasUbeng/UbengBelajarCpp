#include <iostream>
#include <vector>

int main(){
    
    /*
    int benar = 12;
    int jumlahSoal = 100;
    double nilai = benar/(double)jumlahSoal * 100;

    std::cout << nilai << "%";
    

    // kalau input angka duluan pake ini
    //std::getline(std::cin >> std::ws, nama);
    std::string nama;
    std::cout << "Siapa namamu : ";
    std::getline(std::cin, nama);

    std::cout << "Oalaa namamu " << nama << " toh" << std::endl;
    std::cout << "salken " << nama << " pasti tongtong kamu besar" << std::endl;

    int ukuran;
    std::cout << "ukuran tongtong kamu berapa cm?: ";
    std::cin >> ukuran;

    if(ukuran >= 20){
        std::cout << "egiluy gede banget king" << std::endl;
    }else{
        std::cout << "harap mengocok lagi" << std::endl;
    }
    */

    std::string nama;
    std::cout << "Masukkan Nama Kamu: ";
    std::getline(std::cin, nama);

    //nama.length() > 15 ? std::cout << "Nama Kamu Tidak Boleh Lebih Dari 12 Karakter!\n" : std::cout << "Selamat Datang " << nama << std::endl;
    //nama.empty() ? std::cout << "Kamu Harus Masukkan Nama Kamu\n" : std::cout << "Selamat Datang " << nama << std::endl;
    nama.append("@gmail.com");
    std::cout << "Sekarang Email Kamu" << nama << std::endl;


    //https://youtu.be/-TkoO8Z07hI?t=6714

    return 0;
}