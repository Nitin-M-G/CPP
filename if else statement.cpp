#include<iostream>

using namespace std;

int main()
{
    int num{0};
    const int target{400};

    cout<<" Enter the number "<<endl;
    cin>>num;

    if(num>=target)
    {
        cout<<" The number entered "<<num<<" is greater than "<<target<<endl;
        int diff{num-target};
        cout<<" The difference between "<<num<<" & "<<target<<" is "<<diff<<endl;
    }
    else
    {
        cout<<" The number entered "<<num<<" is less than "<<target<<endl;
        int diff{target-num};
        cout<<" The difference between "<<target<<" & "<<num<<" is "<<diff<<endl;
    }

return 0;

}