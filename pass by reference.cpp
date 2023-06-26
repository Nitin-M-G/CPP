#include<iostream>

using namespace std;

void scale_number(int &num);   //Function prototyping 
void swap(int &a,int &b);      //Here the '&' indicates that the number is being passed as an reference instead of the copy 

int main()
{
    int x{10};
    int y{20};
    cout<<"Value of X is :"<<x<<" value of y is :"<<y<<endl;
    swap(x,y);
    cout<<"Value of X is :"<<x<<" value of y is :"<<y<<endl;
    int number{1000};
    scale_number(number);
    cout<<"The changed value of number is :"<<number<<endl;
}

void scale_number(int &num)
{
    if(num>100)
    {
        num=100;
    }
}
 
 void swap(int &a,int &b)    //swaping of the two numbers takes place here 
 {
    int temp=a;
    a=b;
    b=temp;
 }