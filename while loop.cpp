//While loop demonstration
#include<iostream>

using namespace std;
int main()
{

// int num{};
// cout<<" Enter a positive integer "<<endl;
// cin>>num;

// while(num>0)
// {
//     cout<<num<<endl;
//     --num;
// }
// cout<<" Blast off "<<endl;

// int num{0};
// cout<<" Enter a positive integer "<<endl;
// cin>>num;
// int i{1};

// while(num>=i)
// {
//   cout<<endl<<i<<endl;
//   ++i;
// }


// int number{0};
// cout<<"Enter the integer less than 100 "<<endl;
// cin>>number;

// while(number>=100)
// {
//     cout<<"Enter a different number "<<endl;
//     cin>>number;
// }
// cout<<"Thanks for the number "<<endl;

bool done{false};
int number{0};

while(!done)
{
    cout<<"Enter an integer between 1 and 5 "<<endl;
    cin>>number;

    if(number<=1||number>=5)
    {
        cout<<"Out of bounds, try again "<<endl;
    }
    else 
    {
        cout<<" Thanks!"<<endl;
        done=true;   //important to set the bool value to true
    }

}


 return 0;
}
