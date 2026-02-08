//VOWEL, CONSONANT AND NUMBER
#include <iostream>

int main() {
    char x;
    std::cout << "Enter a symbol: ";
    std::cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        std::cout << "It's a vowel";
    } 
    else if(x >= '0' && x <= '9' )
    std::cout<<"it is a number";

        else {
        std::cout << "It's a consonant";
    }

    return 0;
}
