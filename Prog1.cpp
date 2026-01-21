//AVERAGE MARKS OF STUDENTS
#include<iostream>
int main()
{
float marks1;
float marks2;
float marks3;
float average;
std::cout<<"enter the marks of the student 1";
std::cin>>marks1;
std::cout<<"enter the marks of the student 2";
std::cin>>marks2;
std::cout<<"enter the marks of the student 3";
std::cin>>marks3;

average=(marks1+marks2+marks3)/3;
std::cout<<"the average is: "<<average;
return 0;
}