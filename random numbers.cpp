#include<iostream>
#include<cmath>         //required for rand()
#include<ctime>         //required for time()

using namespace std;

int main()
{
    int random_number{};
    size_t count{15};
    int max{6};
    int min{1};

    //seed the random number generator 
    //seeding the random number generator is important to avoid same sequence of numbers everytime 

    cout<<"RAND_MAAX on the system is :"<<RAND_MAX<<endl;
    srand(time(nullptr));

    for(size_t i=0;i<=count;i++)
    {
        random_number=rand()%max+min;
        cout<<random_number<<endl;
    }
    cout<<endl;

return 0;
}