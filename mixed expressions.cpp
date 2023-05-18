/*
This code demonstrates the mixed expression concept where one type of variable gets indulged into the other variable type 

In this code the average of the integer datatype is calculated 

*/

#include<iostream>

using namespace std;

int main()
{
    int total{0};
    int num1{0},num2{0},num3{0};
    const int count {3};

    cout<<" Enter the 3 integers "<<endl;
    cin>>num1>>num2>>num3;

    total=num1+num2+num3;

    double average {0.0};

    //average=total/count;  // The average calculated here is rounded off to integer type
    average=static_cast<double>(total)/count; //Here the "static_cast" function checks whether the value being obtained is capable of having the datatype mentioned in " < > " 
    //average=(double)total/count; //Old style as it just assumes the expected datatype to be of double and does not double check it 
    cout<<" The 3 numbers are "<<num1<<" "<<num2<<" "<<num3<<endl;
    cout<<" The sum of the 3 numbers is "<<total<<endl;
    cout<<" The average of the 3 numbers are "<<average<<endl;

    return 0;

}