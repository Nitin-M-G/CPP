//this program showcases that the value passed on to the function is the copy of the value stored in the main function and cannot be changed in the main function 

#include<iostream>

using namespace std;

void param_test(int formal)
{   cout<<"Initial value of formal in param_test function is :"<<formal<<endl;
    formal=100;
    cout<<"Changed value of formal in param_test function is :"<<formal<<endl;
}

int main()
{
    int formal{50};
    param_test(formal);
    cout<<"The value of formal in the main function is :"<<formal<<endl;
return 0;
}