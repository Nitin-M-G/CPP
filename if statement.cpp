#include<iostream>
#include<vector>

using namespace std;

int main()
{
 int num{0};
 const int min{10};
 const int max{100};
 cout<<" Enter the number between "<<min<<" and "<<max<<endl;
 cin>>num;

 if(num>=min)
 {
    cout<<"---------1st If statement "<<endl;
    cout<<" number is greater than "<<min<<endl;
    int diff{num-min};
    cout<<" The number is "<<diff<<" value greater than "<<min<<endl;
 }

 if(num<=max)
 {
    cout<<"----------2nd If statement "<<endl;
    cout<<" The number is less than "<<max<<endl;
    int diff{max-num};
    cout<<" The number is "<<diff<<" value smaller than "<<max<<endl;
 }

 if(num>=min && num<=max)
 {  cout<<"----------3rd If statement "<<endl;
    cout<<num<<" is in range "<<endl;
    cout<<" This means that the statements 1 and 2 have also been activated "<<endl;
 }







}