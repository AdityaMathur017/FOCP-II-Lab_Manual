//LEAP YEAR
#include<iostream>
int main(){
    int x;
    std::cout<<"enter the year";
    std::cin>>x;
if(x%400==0){
    std::cout<<"it is a leap year";
}
else if(x%4==0 && x%100!=0){
    std::cout<<"it is a leap year";

}
else{
    std::cout<<"it is not a leap year";
}
return 0;
}