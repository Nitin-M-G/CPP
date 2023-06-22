//range based for loop

#include<iostream>
#include<vector>
#include<iomanip>  //library required for manipulating the output statements

using namespace std;

int main()
{
   int scores[]{10,20,30};

   for(auto score:scores)  //range based loop implementation 
   {
    cout<<score<<endl;
   }


   vector<double>tempreatures{87.9,90.6,60.5};
   double average_tempreature{};
   double sum_of_tempreature{0};

   for(auto temp:tempreatures)
   {
    sum_of_tempreature+=temp;
   }

   if(tempreatures.size()!=0)
   {
   average_tempreature=sum_of_tempreature/tempreatures.size();
   }
   else{
    cout<<" The vector is empty "<<endl;
   }
   cout<<fixed<<setprecision(1);
   cout<<" The sum of tempreatures is "<<sum_of_tempreature<<endl;
   cout<<" The average tempreature is "<<average_tempreature<<endl;


   for(auto val:{1,2,3,4,5})
   {
    cout<<val<<endl;
   }

   for(auto c:" This is a test ")
   {
    cout<<c;
   }

   
}