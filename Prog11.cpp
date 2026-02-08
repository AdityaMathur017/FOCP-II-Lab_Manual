// WHOLESALE DISCOUNT
#include <iostream>

int main() {
    int items;
    float price, total;

    std::cout << "enter number of items";
    std::cin >> items;

    std::cout << "enter price per item";
    std::cin >> price;

    total = items * price;

    if (items > 1000) {
        total = total - (0.10 * total);
        std::cout << "10 percent discount applied\n";
    }

    std::cout << "total expense is " << total;

    return 0;
}
