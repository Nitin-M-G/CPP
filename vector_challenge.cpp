#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vector_1;
    vector<int>vector_2;
/*
    int end_value{0};  //integer to perform the pushback function
    cout<<" Enter the first integer to vector_1 "<<endl;
    cin>>end_value;
*/

    //Adding the value into the vector using the pushback function
    vector_1.push_back(10);

    //taking the second value into the vector_1
   /* cout<<" Enter the second value into the vector_1 "<<endl;
    cin>>end_value;
   */

    //Entering the second integer into the vector_1
    vector_1.push_back(20);

    vector_2.push_back(100);
    vector_2.push_back(200);

//displaying of values in vector_1 and vector_2
    cout<<" Values of vector_1 "<<endl;
    cout<<" "<<vector_1.at(0)<<endl;
    cout<<" "<<vector_1.at(1)<<endl;
    cout<<" The size of vector_1 is "<<vector_1.size()<<endl;
    cout<<endl<<" Values of vector_2 "<<endl;
    cout<<" "<<vector_2.at(0)<<endl;
    cout<<" "<<vector_2.at(1)<<endl;
    cout<<" The size of vector_2 is "<<vector_2.size()<<endl;


//creating a 2d vector
    vector<vector<int>>vector_2d;

//taking the vector_1 and vector_2 in vector_2d
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

//printing the values of vector_2d
    cout<<endl<<" Printing the values of vector_2d "<<endl;
    cout<< vector_2d.at(0).at(0)<<"----"<<vector_2d.at(0).at(1)<<endl;
    cout<< vector_2d.at(1).at(0)<<"----"<<vector_2d.at(1).at(1)<<endl;

//changing the value at vector_1.at(0) to 1000
    vector_1.at(0)=1000;

//Display the values of vector_2d again
   cout<<endl<<vector_2d.at(0).at(0)<<"----"<<vector_2d.at(0).at(1)<<endl;
   cout<<endl<<vector_2d.at(1).at(0)<<"----"<<vector_2d.at(1).at(1)<<endl;

//Display the values of vector_1
   cout<<" Values of vector_1 "<<endl;
   cout<<vector_1.at(0)<<endl;
   cout<<vector_1.at(1)<<endl;
   











}