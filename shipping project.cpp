/*
 Shipping cost calculator 

 Ask the user for package dimension in inches 
 Length,Width,Height-these should be integers

 All dimensions must be 10 inches or less or we can cannot ship it 

 Base cost $2.50
 If package volume is greater than 100 cubic inches there is a 10% surcharge 
 If package volume is greater than 500 cubic inches there is a 25% surcharge 
*/

#include<iostream>

using namespace std;

int main()
{
 int length{},width{},height{};
 double base_charge{2.5};

 const int tier1_threshold{100};
 const int tier2_threshold{200};

 int max_dimension_length{10};
 //all dimensions must be less than 10 inches or less

 int package_volume{0};
 double package_cost{0};
 

 cout<<" Welcome to the package cost calculator "<<endl;
 cout<<" Enter the length,width,height of the package separated by spaces : ";
 cin>>length>>width>>height;

 if(length<=max_dimension_length && width<=max_dimension_length && height<<max_dimension_length)
 {
    cout<<endl<<" The package is eligible for the shipping "<<endl;
    package_volume=length*width*height;
    package_cost=base_charge;

    if(package_volume<tier1_threshold)
    {
        cout<<" Base charge tier is applied "<<endl;
        package_cost=package_cost;
        
        // cout<<" The charge for the shipping is "<<package_cost<<endl;
    }
    else if(package_volume>=tier1_threshold && package_volume<tier2_threshold)
    {
        cout<<" Tier 1 is applied "<<endl;
        package_cost+=package_cost*0.1;
        //cout<<" The charge for the shipping is "<<package_cost<<endl;
    }
    else if(package_volume>=tier2_threshold)
    {
        cout<<" Tier 2 surcharge is applied "<<endl;
        package_cost+=package_cost*0.25;
        //cout<<" The charge for the shipping is "<<package_cost<<endl;
    }

    cout<<" The volume of the package is "<<package_volume<<endl;
    cout<<" The cost of shipping is "<<package_cost<<endl;
    
 }
 else
 {
    cout<<" The package is not eligible for the shipping "<<endl;
 }

    

    return 0;
}