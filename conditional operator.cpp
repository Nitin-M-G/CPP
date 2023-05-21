//conditional operators

#include<iostream>

using namespace std;

int main()
{
//   int num{};
//   cout<<" Enter an integer "<<endl;
//   cin>>num;

//   if(num%2==0)
//   {
//     cout<<num<<" is even "<<endl;
//   }
//   else 
//   {
//     cout<<num<<" is odd "<<endl;
//   }


//   cout<<endl<<" using conditional operator "<<endl;
//   cout<<num<<" is "<<((num%2==0)?"even":"odd")<<endl;


  int num1{},num2{};

  cout<<" Enter two integers separated by a space "<<endl;
  cin>>num1>>num2;

  cout<<"---------------------Using conditional operator-------------"<<endl;
  cout<<"Largest: "<<((num1>num2)?num1:num2)<<endl;
  cout<<"Smallest: "<<((num1<num2)?num1:num2)<<endl;


  cout<<"---------------------Using if else ladder------------------ "<<endl;
  if(num1==num2)
  {
    cout<<num1<<" & "<<num2<<" are equal "<<endl;
  }
  else if(num1>num2)
  {
    cout<<num1<<" is greater than "<<num2<<endl;
  }
  else
  {
    cout<<num1<<" is smaller than "<<num2<<endl;
  }

  return 0;
}