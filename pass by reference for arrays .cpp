#include<iostream>
#include<string>
#include<vector>

using namespace std;

//function prototyping 
void pass_by_ref1(int &num);
void pass_by_ref2(string &S);
void pass_by_ref3(vector<string>&v);
void print_vector(const vector<string>&v);   //const

void pass_by_ref1(int &num)
{
    cout<<num<<"Hi"<<endl;
    num=1000;      //changing the value of num 
}

void pass_by_ref2(string &S)
{
    S="Ghorpade";  //changing the value of S
}

void print_vector(const vector<string>&v)
{
    for(auto val:v)
    {
        cout<<val<<" , ";
    }
    cout<<endl;
}

void pass_by_ref3(vector<string>&v)
{
  v.clear();      //deletes all the vector elementsa
}

int main()
{
    int num{10};
    int another_num{20};
    cout<<"The value of num before calling :"<<num<<endl;
    pass_by_ref1(num);
    cout<<"The value of num after calling :"<<num<<endl;
    cout<<"--------------------------"<<endl; 

    cout<<"The value of num before calling :"<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"The value of num after calling :"<<another_num<<endl;


    string name{"Nitin"};
    cout<<"Value of name before the calling is :"<<name<<endl;
    pass_by_ref2(name);
    cout<<"Value of name after the calling is :"<<name<<endl;

    vector<string>names{"Nitin","Mahadev","Ghorpade"};
    cout<<"\nnames before calling pass_by_ref3 :";
    print_vector(names);
    pass_by_ref3(names);
    cout<<"\nnames after calling pass_by_ref3 :";
    print_vector(names);


return 0;
}
