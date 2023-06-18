#include<iostream>
#include<string>

using namespace std;
int main()
{
    string original_message;
    string encrypted_message;

    cout<<"Welcome to the encryption system"<<endl;
    cout<<"Enter the message to be encrypted"<<endl;
    getline(cin,original_message);

    for(size_t i=0;i<original_message.length();i++)
    {
        if(original_message.at(i)=='a')
        {
            original_message.at(i)='x';
        }
        else if (original_message.at(i)=='b')
        {
            original_message.at(i)='z';
        }
    }

    // for(char c:original_message)
    // {
    //     if(c=='a')
    //     {
    //         original_message
    //     }
    // }
    encrypted_message=original_message;

    cout<<"The encrypted message is : "<<encrypted_message<<endl;
    cout<<"I hope you succeed in your mission"<<endl;

return 0;
}