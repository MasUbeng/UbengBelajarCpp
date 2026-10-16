#include <iostream>

int main(){

    char operasi;
    double no1;
    double no2;
    double hasil;

    std::cout << "***************** KALKULATOR *****************\n";

    std::cout << "Masukkan Operasi Hitung ";
    std::cin >> operasi;

    std::cout << "Masukkan Nomor Pertama ";
    std::cin >> no1;

    std::cout << "Masukkan Nomor Kedua ";
    std::cin >> no2;

    switch(operasi){

        case '+':
        hasil = no1 + no2;
        std::cout << "Hasilnya Sama Dengan: " << hasil << std::endl;
        break;

        case '-':
        hasil = no1 - no2;
        std::cout << "Hasilnya Sama Dengan: " << hasil << std::endl;
        break;

        case '*':
        hasil = no1 * no2;
        std::cout << "Hasilnya Sama Dengan: " << hasil << std::endl;
        break;

        case '/':
        hasil = no1 / no2;
        std::cout << "Hasilnya Sama Dengan: " << hasil << std::endl;
        break;

        default:
        std::cout << "Masukkan Operasi Hitung Yang Benar!" << std::endl;
        break;
    }

      std::cout << "******************************************\n";

    return 0;
}