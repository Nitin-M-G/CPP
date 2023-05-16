#include<iostream>
#include<vector>
using namespace std;
 
 int main()
 {
    //Vector intialization  
    vector<int> numbers (5);
    vector<int>number{1,2,3,4,5};
    
    //The below segment is for the printing of vector elements using the array syntax
    cout<<"--------"<<endl;
    cout<<" Array syntax "<<endl;
    cout<<number[0]<<endl;
    cout<<endl<<"--------"<<endl;

    //The below segment is for the printing of vector elements using the vector syntax
    cout<<endl<<" Vector syntax "<<endl;
    cout<<number.at(3)<<endl;
    cout<<"--------"<<endl;

    //The below segment is for taking inputs to the vector using vector syntax at a particular index
    cout<<"--------"<<endl;
    cout<<" Enter five values for the syntax "<<endl;
    cin>>numbers.at(0);
    cin>>numbers.at(1);
    cin>>numbers.at(2);
    cin>>numbers.at(3);
    cin>>numbers.at(4);

    cout<<endl<<"Displaying the stored values in the vector"<<endl;
    cout<<numbers.at(0)<<endl;
    cout<<numbers.at(1)<<endl;
    cout<<numbers.at(2)<<endl;
    cout<<numbers.at(3)<<endl;
    cout<<numbers.at(4)<<endl;
    

    //Taking the size of the vector using size function
    cout<<endl<<"--------"<<endl;
    cout<<"There are a lot of numbers in the vector "<<"The size of the vector is "<<number.size()<<endl;
    cout<<endl<<"--------"<<endl;

    //Implementing the push back functionality
    cout<<endl<<"--------"<<endl;
    int value_at_end{0};       //variable defined to add the numbers in the vector
    cout<<" Enter the value to add into the vector "<<endl;
    cin>>value_at_end;
    numbers.push_back(value_at_end);
    cout<<" Add one more number to the vector "<<endl;
    cin>>value_at_end;
    numbers.push_back(value_at_end);
    cout<<" The size of the vector is "<<numbers.size()<<" which is the right value "<<endl;
    cout<<" The values stored in the vector are "<<endl;
    cout<<numbers.at(0)<<endl;
    cout<<numbers.at(1)<<endl;
    cout<<numbers.at(2)<<endl;
    cout<<numbers.at(3)<<endl;
    cout<<numbers.at(4)<<endl;
    cout<<numbers.at(5)<<endl;
    cout<<numbers.at(6)<<endl;

    //Checking the bounds check feature of the vector by generating an error 
    //cout<<" This should generate an error "<<numbers.at(10)<<endl;


    // 2D vector 
    //creating a 2D vector 
    vector<vector<int>>movie_rating{
      {1,2,3,4},{5,6,7,8},{9,10,11,12}
    };

    cout<<" The displaying of values stored in 2D vector using Array Syntax "<<endl;
    cout<<"--------------"<<endl;
    cout<<movie_rating[0][0]<<endl;
    cout<<movie_rating[0][1]<<endl;
    cout<<movie_rating[0][2]<<endl;
    cout<<movie_rating[0][3]<<endl;
    cout<<"--------------"<<endl;


    cout<<" Displaying of vector values using vector syntax "<<endl;
    cout<<"--------------"<<endl;
    cout<<movie_rating.at(2).at(0)<<endl;
    cout<<movie_rating.at(2).at(1)<<endl;
    cout<<movie_rating.at(2).at(2)<<endl;
    cout<<movie_rating.at(2).at(3)<<endl;
    cout<<"--------------"<<endl;

    return 0;

 }