//This code mainly deals with the default values intitalization and their overriding in required instances 

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//function prototyping 

double calc_cost(double base_cost,double tax_rate=0.6,double shipping=3.50);
void greeting(string name,string preffix="Mr.",string suffix =" ");

void greeting(string name,string preffix,string suffix)
{
    cout<<"Hello "+preffix+" "+name+" "+suffix<<endl;
}

double calc_cost(double base_cost,double tax_rate,double shipping)
{
    return base_cost+=(base_cost*tax_rate)+shipping;
}

int main()
{
    double cost{0};
    cost=calc_cost(100.0,0.08,4.025); //default values are overridden for tax_rate and shipping
    cout<<fixed<<setprecision(2);
    cout<<"Cost is "<<cost<<endl;

    cost=calc_cost(200.0);
    cout<<"Cost is "<<cost<<endl;

    greeting("Nitin Mahadev Ghorpade");
    greeting("Nitin Mahadev Ghorpade","Dr.","PhD");
    greeting("Ramchandra Rokhade");
    
    cout<<endl;
return 0;
}