#include<iostream>

using namespace std;

int main()
{
    int num{100};   //local to main 
    int num1{200};  //local to main 
    cout<<"The num local to main is "<<num<<endl;

    {  //creates new level of scope 
        int num{10}; //local to the inner block 
        cout<<"Local num for inner block is :"<<num<<endl;
        cout<<"Inner block in main can see out-num1 is :"<<num1<<endl;

    }
    cout<<"Local num is : "<<num<<" in main is : "<<num<<endl;
}