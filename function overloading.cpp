//This program is defined for the function overloading feature 

#include<iostream>
#include<string>
#include<vector>

using namespace std;


//Function prototyping 
void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num)             //function for handling the integer datatype
{
    cout<<"Printing int :"<<num<<endl;
}

void print(double num)         //function for handling the double datatype
{
    cout<<"Printing double :"<<num<<endl;
}

void print(string s)          //function for handling the string datatype
{
    cout<<"Printing string :"<<s<<endl;
}

void print(string s,string p)  //function for handling the string datatype
{
    cout<<"Printing 2 strings :"<<s<<" , "<<p<<endl;
}

void print(vector<string>t)   //function for handling the vector of string datatype
{
    cout<<"Printing vector of strings :";

    for(auto val:t)
    {
        cout<<val<<" ";
    }
}

int main()
{   
    int a{10};
    double b;
    string s{};
    string b{};
    vector<string>stooges{"Nitin","Mahadev","Ghorpade"};
    print(100);
    print(10.50);
    print("Nitin");
    print("Nitin","Ghorpade");
    print(stooges);


    

return 0;
}
