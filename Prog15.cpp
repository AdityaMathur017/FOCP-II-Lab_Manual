//maximum sales figure
#include <iostream>

int main() {
    int n;
    double sales[100], maxSales;

    std::cout << "Enter number of entries: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
       std::cout << "Enter sales value " << i + 1;
        std::cin >> sales[i];
    }

    maxSales = sales[0];

    for (int i = 1; i < n; i++) {
        if (sales[i] > maxSales)
            maxSales = sales[i];
    }

    std::cout << "Maximum sales figure = " << maxSales <<std::endl;

    return 0;
}
