//Roots of quadratic eqn
#include<iostream>
#include<cmath>
int main(){
    double a;
    double b;
    double c;
    double root;
    double root1;
    double root2;
    std::cout<<"enter the value of a,b and c";
    std::cin>>a>>b>>c;
    if(a==0){
        std::cout<<"not an quadratic equation"<<std::endl;
     
    }
    double D=b*b-(4*a*c);
    if(D>0){
  root1==(-b + sqrt(D)) / (2 * a);
  root2==(-b - sqrt(D)) / (2 * a);
  std::cout<<"first root of the equation is"<<root1<<"the second root of the equation is"<<root2;
    }
    if (D=0)
    {
        root==-b/(2*a);
        std::cout<<"the root of the equation is"<<root;
    }
    else{
        std::cout<<"this equation has no real roots";
    }
return 0;
}