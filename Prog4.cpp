//BILL CALCULATOR 
#include<iostream>
int main(){
int itemno;
int quantity;
int price;
int amount;
int tobepaid;
float discount;
std::cout<<"enter the item number ";
    std::cin>>itemno;

    std::cout<<"enter the quantity ";
    std::cin>>quantity;

    std::cout<<"enter the price ";
    std::cin>>price;
    
    amount=quantity*price;
discount=0.20*amount;
tobepaid=amount-discount;
std::cout<<"amount to be paid is "<<tobepaid;

    return 0;
}
