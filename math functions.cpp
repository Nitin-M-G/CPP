#include<iostream>
#include<cmath>              //required for various mathematical functions required 

using namespace std;
 int  main()
 {
    double num{};

    cout<<"Enter a number(double): ";
    cin>>num;

    cout<<"The sqrt of the number is "<<sqrt(num)<<endl;
    cout<<"The cube root of the number is "<<cbrt(num)<<endl;

    cout<<"The sine of the number is "<<sin(num)<<endl;
    cout<<"The cosine of the number is "<<cos(num)<<endl;

    cout<<"The ceil of the number is "<<ceil(num)<<endl;
    cout<<"The floor of the number is "<<floor(num)<<endl;
    cout<<"The round for the number is "<<round(num)<<endl;

    double power;
    cout<<"Enter the power to be raised for the number :";
    cin>>power;

    cout<<num<<" raised to the power of "<<power<<" is : "<<pow(num,power)<<endl;
    cout<<endl;


 }