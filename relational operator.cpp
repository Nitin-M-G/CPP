/* This program is used to demonstrate the using of the relational operator */

#include<iostream>

using namespace std;

int main()
{
    int num1{},num2{};

    cout<<boolalpha;     //boolalpha is used to have the value of bool returned in the form of True or False 
    cout<<" Enter 2 integers separated by a space "<<endl;
    cin>>num1>>num2;

    cout<<num1<<" > "<<num2<<" : "<<(num1>num2)<<endl;
    cout<<num1<<" >= "<<num2<<" : "<<(num1>=num2)<<endl;
    cout<<num1<<" < "<<num2<<" : "<<(num1<num2)<<endl;
    cout<<num1<<" <= "<<num2<<" : "<<(num1<=num2)<<endl;

    return 0;

}