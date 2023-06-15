//This code is to demonstrate the working of the various string operators like the toupper and tolower

#include<iostream>
using namespace std;
int main()
{
    char c,b;
    cout<<" Enter the character "<<endl;
    cin>>c;
    b=toupper(c);
    cout<<b<<endl;
    b=tolower(c);
    cout<<b<<endl;

return 0;
}
