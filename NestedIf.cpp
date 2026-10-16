#include <iostream>

int main(){

    int cm;
    std::cout << "ukuran tongtong kamu " << std::endl;
    std::cin >> cm;

    switch (cm)
    {
    case 1:
        std::cout << "tongtong atau apa tuh kecil banget deksz" << std::endl;
        break;
    case 2:
        std::cout << "tongtong apaan njir aowkwk" << std::endl;
        break;
    case 3:
        std::cout << "tongtong masih kecil anjir" << std::endl;
        break;
    case 4:
        std::cout << "tongtong sedang woila" << std::endl;
        break;
    case 5:
        std::cout << "yaa yaa saya stecu" << std::endl;
        break;
    case 6:
        std::cout << "males gw ngetik" << std::endl;
        break;
    
    default:
        std::cout << "mau berak ah" << std::endl; 
        break;
    }   


    return 0;
}