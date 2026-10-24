#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL)); // Seed the random number generator with the current time
    int nomor = (rand() % 6) + 1; // dadu rolling 1-6

    std::cout << nomor;

    return 0;
}