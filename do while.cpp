//Do while loop
//simple menu system

#include<iostream>

using namespace std;

int main()
{
    char selection{};

    do
    {
       cout<<" Enter the selection among "<<endl;
       cout<<" 1. Do this "<<endl;
       cout<<" 2. Do that "<<endl;
       cout<<" 3. Do something else "<<endl;
       cout<<" Q. Quit "<<endl;
       cin>>selection;
       cout<<"-------------------------"<<endl;

       switch (selection)
       {
        case '1':
         cout<<" You choose one which was this "<<endl;
         break;

        case '2':
         cout<<" You choose 2 which is this "<<endl;
         break;

        case '3':
         cout<<" You choose 3 which is fun "<<endl;
         break;

        case 'q':
        case 'Q':
         cout<<" Goodbye...!"<<endl;
         break;

        default:
        cout<<" Try again "<<endl;
       }


    } while (selection!='q'&&selection!='Q');
    
    return 0;

}