#include <iostream>
#include <vector>

int main(){
    
    /*
    int benar = 12;
    int jumlahSoal = 100;
    double nilai = benar/(double)jumlahSoal * 100;

    std::cout << nilai << "%";
    */

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

    /*
    operasi hitung (ubeng mau tidur sih jadi belajarnya yang cepet aja)
    std::min(x, y)
    std::max(x, y)

    harus include <cmath>
    pow(x, y) x pangkat y
    sqrt(x) pangkat 2
    abs(x) absolut |x|
    round(x) pembulatan
    ceil(x) pembulatan atas(?)
    floor(x) pembulatan bawah(?)

    lengkapnya di https://cplusplus.com/reference/cmath/
    */

    return 0;
}