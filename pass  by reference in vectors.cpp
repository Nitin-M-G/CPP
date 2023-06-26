#include<iostream>
#include<vector>

using namespace std;

void print(const vector<int> &v);

int main()
{
    vector<int>number{1,2,3,4,5,6};
    print(number);

return 0;
}

void print(const vector<int>&v)
{

    int i=10;
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto val:v)
    {
        val=i;
        i++;
    }
    cout<<endl;
    for(auto val:v)
    {
        cout<<val<<" ";
    }
}