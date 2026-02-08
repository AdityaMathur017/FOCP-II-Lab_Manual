//SALARY BONUS
#include<iostream>
int main(){
    float salary;
    float bonus;
    float net; 
    std::cout<<"worker's salary is: ";
    std::cin>>salary;
    bonus=0.12*salary;
    net=salary+bonus;
    std::cout<<"the net salary is: "<<net<<"bonus is: "<<bonus;
    
    return  0;
}

