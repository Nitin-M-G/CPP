//Displaying the histogram based on the values of data 

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int num_items{};
    cout<<" How many data items do you have? "<<endl;
    cin>>num_items;

    vector<int>data{};

    for(int i=1;i<=num_items;i++)
    {
       int data_item{};
       cout<<" Enter the data item "<<i<<endl;
       cin>>data_item;

       data.push_back(data_item);
    }
    cout<<" Displaying histogram "<<endl;
    for(auto val:data)
    {
        for(int i=1;i<=val;i++)
        {  
            if(i%5==0)
           {
            cout<<"*";
           }
            cout<<"-";
        }
        cout<<endl;
    }

return 0;
}