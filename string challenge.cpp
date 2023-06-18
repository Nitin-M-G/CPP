#include<iostream>
#include<string>

using namespace std;

int main()
{
    string c{};
    string p{};
    cout<<"Enter the string to be pyramided : ";
    getline(cin,c);

    size_t length=c.length();
    
    
        for(int i=0;i<length;i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    
return 0;
}