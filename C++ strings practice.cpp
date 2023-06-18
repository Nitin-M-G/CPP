#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};           //Apple
    string s6{s1,0,3};       //App
    string s7{10,'x'};       //xxxxxxxxxx

    cout<<s0<<endl;
    cout<<s0.length()<<endl;

    cout<<"S0 is intialized to :"<<s0<<endl;
    cout<<"S1 is intialized to :"<<s1<<endl;
    cout<<"S2 is intialized to :"<<s2<<endl;
    cout<<"S3 is intialized to :"<<s3<<endl;
    cout<<"S4 is intialized to :"<<s4<<endl;
    cout<<"S5 is intialized to :"<<s5<<endl;
    cout<<"S6 is intialized to :"<<s6<<endl;
    cout<<"S7 is intialized to :"<<s7<<endl;

    //comparision
    cout<<"\n Comparision "<<"\n----------------------------"<<endl;
    cout<<boolalpha;
    cout<<s1<<" == "<<s5<<" : "<<(s1==s5)<<endl;
    cout<<s1<<" == "<<s2<<" : "<<(s1==s2)<<endl;
    cout<<s1<<" != "<<s2<<" : "<<(s1!=s2)<<endl;
    cout<<s1<<" < "<<s2<<" : "<<(s1<s2)<<endl;
    cout<<s2<<" > "<<s1<<" : "<<(s2>s1)<<endl;
    cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl;
    cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl;

    //Assignment 
    cout<<"\n Assignment "<<"\n--------------------------";

    s1="Watermelon";
    cout<<"s1 is now "<<s1<<endl;
    s2=s1;
    cout<<"s2 is now "<<s2<<endl;

    s3="Nitin";
    cout<<"s3 is now: "<<s3<<endl;

    s3[0]='C';
    cout<<"The first of s3 is changed to 'C' "<<s3<<endl;

    s3.at(0)='P';
    cout<<"s3 change first letter to 'P' "<<s3<<endl;






}