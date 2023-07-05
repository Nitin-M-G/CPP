//This program showcases the flow of function working 

#include<iostream>

using namespace std;

void func2(int &x,int y,int z)   //&x is passed in reference with the result in func1
{
    x+=y+z;
}


int func1(int a,int b)
{
    int result{};
    result=a+b;
    func2(result,a,b);    //here the value of result is passed to the func2 
    return result;
}

int main()
{
    int x{10};
    int y{20};
    int z{};
    z=func1(x,y);     
    cout<<z<<endl;        //final value of result is obtained and stored in variable Z    
}