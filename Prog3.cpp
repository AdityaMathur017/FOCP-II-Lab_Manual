//CELCIUS TO FARHENEIT AND VICE VERSA
#include<iostream>
int main()
{
    float c;
 
    float f;
 
    char choice;
    float conversion1;
    float conversion2;
    std::cout<<"your choice is: ";
std::cin>>choice;

if(choice=='f'||choice == 'F'){
    std::cout<<"enter the temperature in farehneit \n";
    std::cin>>f;
    conversion1=(f-32)*5.0/9;
    std::cout<<"converted temperature is \n"<<conversion1;

}

else if(choice=='c'||choice == 'C'){
    std::cout<<"enter the temperature in centigrade\n";
    std::cin>>c;
    conversion2=(c*9/5.0)+32;
    std::cout<<"converted temperature is \n"<<conversion2;

}
  return 0;
}