//welcome page
#include<iostream>
using namespace std;

void welcome(string = " Agent", string = "");

int main()
{
    welcome();
    welcome(" Aditya");
    welcome(" Aditya"," Mathur");
    return 0;
}

void welcome(string first, string last)
{
    cout << "Welcome" << first << last << endl;
}