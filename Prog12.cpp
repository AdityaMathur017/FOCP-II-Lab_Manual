//TYPE OF TRIANGLE
#include <iostream>

int main() {
    int a;
    int b;
    int c;
    std::cout<<"enter the sides of the triangle ";
    std::cin>>a>>b>>c;
    if(a==b==c){
        std::cout<<"it is an equilateral triangle";
    }
    else  if(a==b || b==c || a==c){
    std::cout<<"it is an isosceles triangle";
    }
    else{
        std::cout<<"it is a scalene triangle";
        return 0;
    }
}

