//change calculator implementation

#include<iostream>

#include<string>

using namespace std;

int main()
{
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    const int penny{1};

    int amount{0};
    cout<<" Enter the amount in cents "<<endl;
    cin>>amount;

    int balance{},dollars{},quarters{},dimes{},nickels{},pennies{},balances{};

    // dollars=amount/dollar_value;
    // balance=amount-(dollar_value*dollars);

    // quarters=balance/quarter_value;
    // balance-=quarters*quarter_value;

    // dimes=balance/dime_value;
    // balance-=dimes*dime_value;

    // nickels=balance/nickel_value;
    // balance-=nickels*nickel_value;

    // pennies=balance/penny;
    
    // cout<<" The dollars in the amount are "<<dollars<<endl;
    // cout<<" The quarters in the amount are "<<quarters<<endl;
    // cout<<" The dimes in the amount are "<<dimes<<endl;
    // cout<<" The nickels in the amount are "<<nickels<<endl;
    // cout<<" The pennies in the amount are "<<pennies<<endl;



    cout<<"------------------------------------------"<<endl;
    cout<<" Using the modulo operator "<<endl;

    dollars=amount/dollar_value;
    balances=amount%dollar_value;

    quarters=balances/quarter_value;
    balances%=quarter_value;

    dimes=balances/dime_value;
    balances%=dime_value;

    nickels=balances/nickel_value;
    balances%=nickel_value;

    pennies=balances;

    cout<<" The dollars in the amount are "<<dollars<<endl;
    cout<<" The quarters in the amount are "<<quarters<<endl;
    cout<<" The dimes in the amount are "<<dimes<<endl;
    cout<<" The nickels in the amount are "<<nickels<<endl;
    cout<<" The pennies in the amount are "<<pennies<<endl;


 return 0;

}