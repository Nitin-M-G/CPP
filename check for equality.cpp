#include<iostream>

using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{},num2{};

    cout<<" Enter the two numbers "<<endl;
    cin>>num1>>num2;
    equal_result=(num1==num2);
    not_equal_result=(num1!=num2);
    cout<<" Comparision result(equals):"<<equal_result<<endl;
    cout<<" Comparision result(not equals):"<<not_equal_result<<endl;


    char char1{},char2{};

    cout<<" Enter the two characters "<<endl;
    cin>>char1>>char2;
    equal_result=(char1==char2);
    not_equal_result=(char1!=char2);
    cout<<" Comparision result (equals) :"<<equal_result<<endl;
    cout<<" Comparision result (not equals) :"<<not_equal_result<<endl;

return 0;
}