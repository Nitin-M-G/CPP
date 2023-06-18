#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    string s2;
    s1="Hi I am Nitin ";
    cout<<s1<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Printing of the string in different fashion "<<endl;
    cout<<s1.substr(0,2)<<endl;          //.substr function helps in printing the characters held in the string according to the subscript and the range given 
    cout<<s1.substr(4,1)<<endl;
    cout<<s1.substr(6,2)<<endl;
    cout<<s1.substr(8,5)<<endl;

    cout<<"-----------------------------------"<<endl;
    cout<<"Searching for the different characters in the string "<<endl;
    cout<<s1.find("Nitin")<<endl;        //.find function helps in finding the character and gives out it's index position in the given string
    cout<<s1.find("I")<<endl;
    cout<<s1.find("am",4)<<endl;        //.find searches from the index mentioned ahead which is 4
    cout<<s1.find("X")<<endl;           //.find gives out string::npos as output when the search is not found 
    cout<<"------------------------------------"<<endl;

    cout<<"--------------------"<<endl;
    cout<<"Using erase function to delete the strings "<<endl;
    cout<<s1.erase(0,2);                //.erase deletes the string from the given index position of mentioned length of it
    //s1.clear();                         //empties string s1

    cout<<"-------------------------"<<endl;
    cout<<"Checking the length of the string"<<endl;
    cout<<"The length of the string s1 is "<<s1.length()<<endl;

    s1+="Ghorpade";                     //this is demonstration of compound concatenation
    cout<<s1<<endl;


    cout<<"---------------------------------"<<endl;
    cout<<" Enter the string "<<endl;
    getline(cin,s2);                    //getline() helps in receiving input of lines with whitespaces 
    cout<<s2<<endl<<endl;

    cout<<"Enter the string, but the limiter is set as n "<<endl;
    getline(cin,s2,'n');
    cout<<s2<<endl;



return 0;
}