// PRIME NUMBER CHECKER
#include<iostream>
using namespace std;

int main(){
    int number;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> number;

    if(number <= 1){
        isPrime = false;
    }
    else{
        for(int i = 2; i <= number / 2; i++){
            if(number % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "It is a Prime number";
    else
        cout << "Not a prime number";

    return 0;
}