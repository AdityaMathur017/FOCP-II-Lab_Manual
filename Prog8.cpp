//FUZZ BUZZ
#include <iostream>

int main() {
    int N;
    std::cout << "enter the value of N: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "buzz fuzz";
        }
        else if (i % 3 == 0) {
            std::cout << "buzz";
        }
        else if (i % 5 == 0) {
            std::cout << "fuzz";
        }
        else {
            std::cout << i;
        }
   std::cout << std::endl;
    }
 return 0;
}
