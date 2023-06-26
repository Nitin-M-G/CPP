#include<iostream>
#include<vector>

using namespace std;

int main()
{   int chetan[]={6,7,98,9};
    vector<int>arr(5);
    vector<int>ar{1,2,3,4,5};

    for(auto val :chetan)
    {
        cout<<"This is the array chetan being intialized "<<endl;
        cout<<val<<endl;
    }

    for(int i=0;i<7;i++)
    { 
        cout<<"No range based loop here "<<endl;
        cout<<chetan[i]<<endl;
    }
     for(auto val:ar)    //range based loop 
     {
        cout<<val<<endl;
     }

     cout<<ar[1]<<endl;
     cout<<ar.at(1)<<endl;

     for(auto val:arr)
     {
        cout<<val<<endl;
     }



return 0;
}