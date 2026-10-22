#include <iostream>

int main(){

    int baris;
    int kolom;
    char simbol;

    std::cout << "berapa banyak baris? ";
    std::cin >> baris;
    std::cout << "berapa banyak kolom? ";
    std::cin >> kolom;
    std::cout << "masukkan simbolnya ";
    std::cin >> simbol;

    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            std::cout << simbol;
        }
        std::cout << '\n';
    }
        return 0;
}