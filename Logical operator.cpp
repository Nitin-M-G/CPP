#include<iostream>

using namespace std;

int main()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout<<boolalpha;

    //checking whether entered number is within the bounds 
     cout<<" Enter the number whose bounds are to be checked "<<endl;
     cin>>num;

    bool within_bounds{false};

    // within_bounds=(num>lower && num<<upper);

    // cout<<" The number "<<num<<" is in between "<<lower<<" and "<<upper<<" : "<<within_bounds<<endl;

    // bool outside_bounds{false};

    // outside_bounds=(num>upper);

    // cout<<" The number "<<num<<" is outside the upper limit : "<<outside_bounds<<endl;

    // bool below_bounds{false};
    // below_bounds=(num<lower);
    // cout<<" The number "<<num<<" is below the bounds "<<below_bounds<<endl;

    //checking the outside bounds for num 

    bool out_of_bound{false};
    out_of_bound=(num<lower || num>upper);
    cout<<" The number does not lie in the range of "<<lower<<" and "<<upper<<" : "<<out_of_bound<<endl;



   return 0;


}