/*
This code is to work with the increment and decrement operator
Comment out the required code snippet to execute
 */


#include<iostream>

using namespace std;

int main()
{
    int a{2};
    int result{0};

    cout<<endl<<" The increment part is demonstrated here "<<endl;
    //Post-increment is demonstrated
    cout<<a<<endl;
    result=a++;
    cout<<"This for the post increment "<<result<<endl;    
    cout<<endl<<a<<endl;


    // //Pre-increment is demonstrated 
    cout<<a<<endl;
   result=++a;
    cout<<"This is for pre increment "<<result<<endl;    
    cout<<endl<<a<<endl;


     cout<<endl<<"The decrement part is demonstrated here "<<endl;
    //Pre-decrement is demonstrated 
    cout<<a<<endl;
    result=--a;
    cout<<result<<endl;    
    cout<<a<<endl;

    //Post-decrement is demonstrated 
    cout<<a<<endl;
    result=a--;
    cout<<result<<endl;    
    cout<<a<<endl;



    return 0;
}