#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<" Enter the value for a "<<endl;
    cin>>a;
    int b;
    cout<<" Enter the value for b "<<endl;
    cin>>b;
    int result{0};

//addition operator " + "
result=a+b;
cout<<endl<<" The result for addition = "<<result<<endl;
//substraction operator " - "
result=a-b;
cout<<endl<<" The result for substraction = "<<result<<endl;
//multipliaction operator
result=a*b;
cout<<endl<<" The result for multiplication = "<<result<<endl;
//division operator " / "
result=a/b;
cout<<endl<<" The result for division = "<<result<<endl;
//remainder operator " % "
result=a%b;
cout<<endl<<" The result for the remainded = "<<result<<endl;


}