//Calculator
#include<iostream>
int main(){
    double number1;
    double number2;
    int choice;
    std::cout<<"what operation do you want to use\n";
    std::cout<<" 1. Addition";
    std::cout<<" 2. Subtraction";
    std::cout<<" 3. Multiplication";
    std::cout<<" 4. Division";
    std::cin>>choice;
    std::cout<<"enter 2 numbers";
    std::cin>>number1>>number2;
    switch(choice){
        case 1:
        std::cout<<"Result= "<<number1+number2<<std::endl;
        break;

        case 2:
        std::cout<<"Result= "<<number1-number2<<std::endl;
        break;

        case 3:
        std::cout<<"Result= "<<number1*number2<<std::endl;
        break;

        case 4:
    if (number2 != 0)
        std::cout<<"Result= "<<number1/number2<<std::endl;
    else
        std::cout<<"Error: Division by zero"<<std::endl;
    break;

 default:
            std::cout << "Invalid choice" << std::endl;
    }
    return 0;
}