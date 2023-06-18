#include<iostream>
#include<string>

using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"zyxwvutsrqponmlkjfedcbaZYXVUTSRQPONMLKJFEDCBA"};

    string original_message{};
    string encrypted_message{};

    cout<<"Welcome to the message encryption\n";
    cout<<"Enter the message to be encrypted : ";
    getline(cin,original_message);

    for(char c:original_message)
    {
        size_t position = alphabet.find(c);
        if(position!=string::npos)
        {
        char new_character {key.at(position)};
        encrypted_message+=new_character;
        }
        else 
        {
            encrypted_message+=c;
        }
    }
    cout<<"The encrypted message is : ";
    cout<<encrypted_message<<endl;
    cout<<"Please carry out your mission\n";

    cout<<"-----------------------------------------\n";
    cout<<"Decrypted message\n";


    string decrypted_message{};
    for (char c:encrypted_message)
    {
        size_t position=key.find(c);
        if(position!=string::npos)
        {
            decrypted_message+=alphabet.at(position);
        }
        else 
        {
            decrypted_message+=c;
        }
    }
    cout<<"The decrypted message is : "<<decrypted_message<<endl;
    cout<<"Congratulations you have decrypted the message\n";

return 0;
}