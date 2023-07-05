#include<iostream>
#include<vector>

using namespace std;

//Function prototyping 
int inserting_number(vector<int>&);
double mean(vector<int>&);
void print(vector<int>&);
int smallest(vector<int>&);
int largest(vector<int>&);

int main()
{
char selection{};
vector<int>numbers{10,20,30};
do
{
    cout<<"\nP : printing numbers "<<endl<<"A : add a number "<<endl<<"M : mean of numbers"<<endl<<"S : displaying smallest number "<<endl<<"L : displaying largest number "<<endl<<"Q : quit "<<endl;
    cout<<"enter the choice "<<endl;
    cin>>selection;

    switch (selection)
    {
        case 'P':
        case 'p':
        {
        print(numbers);
        // {
        //   if(numbers.size()!=0)
        //   {
        //    for(auto val:numbers)
        //    {
        //     cout<<val<<endl;
        //    }
        //   }

        //   else
        //   {
        //     cout<<" The vector is empty "<<endl;
        //   }

        break;
        }

        case 'A':
        case 'a':
        {
        inserting_number(numbers);
        // {
        //    int read{};
        //    cout<<" Enter the number to add in the vector "<<endl;
        //    cin>>read;
        //    numbers.push_back(read);

        break;
        }

        case 'M':
        case 'm':
        {
        mean(numbers);
        // {
        //    if(numbers.size()!=0)
        //    {
        //     int sum{};
        //     for(auto val: numbers)
        //     {
        //      sum+=val;
        //     }
        //     cout<<" The average of the vector is "<<sum/numbers.size()<<endl;
        //    }

        //    else
        //    {
        //     cout<<" The vector is empty "<<endl;
        //    }

        break;
        }


        case 'S':
        case 's':
        {
        smallest(numbers);
        break;
        }
        // {
        //   if(numbers.size()!=0)
        //   {
        //     int small{numbers.at(0)};
        //     for(auto val: numbers)
        //     {
        //         if(val<small)
        //         {
        //             small=val;
        //         }

        //         else 
        //         {
        //             small=small;
        //         }

        //     }
        //     cout<<" The smallest number in the vector is "<<small<<endl;
            
        //   }

        //   else 
        //   {
        //     cout<<"The vector is empty "<<endl;
        //   }
            
        // break;
        // }


        case 'L':
        case 'l':
        {
        largest(numbers);
        break;
        }
        // {
        //  if(numbers.size()!=0)
        //  {
        //    int largest{};
        //    for(auto val:numbers)
        //    {
        //        if(val>largest)
        //         {
        //           largest=val;
        //         }

        //         else
        //         {
        //           largest=largest;
        //         }
        //    }

        //    cout<<" The largest number in the vector is "<<largest<<endl;
        //  }

        //  else 
        //  {
        //     cout<<"The vector is empty "<<endl;
        //  }

        // break;
        // }


        case 'q':
        case 'Q':
        {
            cout<<" Goodbye...! "<<endl;
        break;
        }


        default:
        {
            cout<<" Incorrect option entered "<<endl;
        }


    }

    
} while (selection!='q'&&selection!='Q');

return 0;

}

void print(vector<int>&v)
{
    cout<<"-----------------------------------------------\n";
    cout<<"Print function is called "<<endl;
    size_t t=v.size();
    if(t!=0)
    {
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    }
    else
    {
        cout<<"The vector entered is empty\n ";
    }
}

int smallest(vector<int>&v)
{
    size_t t=v.size();
    if(t!=0)
    {
    cout<<"-----------------------------------------------\n";
    cout<<"Smallest function is called "<<endl;
    int smallest=v.at(0);
    for(auto val:v)
    {
        if(smallest>val)
        {
            smallest=val;
        }
    }

    cout<<"The smallest number in the vector is : "<<smallest<<endl;
    }
    else 
    {
        cout<<"The vector is empty\n";
    }
return 0;
}

int largest(vector<int>&v)
{
    cout<<"-----------------------------------------------\n";
    cout<<"Largest function is called "<<endl;
    size_t t=v.size();
    if(t!=0)
    {
    int largest=v.at(0);
    for(auto val:v)
    {
        if(val>largest)
        {
            largest=val;
        }
    }

    cout<<"The largest number is : "<<largest<<endl;
    }
    else
    {
        cout<<"The vector is empty\n";
    }
return 0;
}

double mean(vector<int>&v)
{
    cout<<"-----------------------------------------------\n";
    cout<<"Mean function is called "<<endl;
    double mean{};
    int sum{};
    size_t size=v.size();
    if(size!=0)
    {
    for(auto val:v)
    {
        sum+=val;
    }
    mean=sum/size;
    cout<<"The mean of the vector is : "<<mean<<endl;
    }
    else
    {
        cout<<"The vector is empty\n";
    }
return 0;
}

int inserting_number(vector<int>&v)
{
    cout<<"-----------------------------------------------\n";
    cout<<"Inserting a number function is called "<<endl;
    int number{};
    cout<<"Enter the number to be inserted in the vector"<<endl;
    cin>>number;
    v.push_back(number);
    cout<<"The inserted number is : "<<number<<endl;

return 0;
}


// char selection(char c)
// {
//     char c;
//     char selection{};
//     cout<<"Enter the choice of action from the below listed operations "<<endl;
//     cout<<"\nP : printing numbers "<<endl<<"A : add a number "<<endl<<"M : mean of numbers"<<endl<<"S : displaying smallest number "<<endl<<"L : displaying largest number "<<endl<<"Q : quit "<<endl;
//     cin>>c;
//     selection=toupper(c);

// return selection;
// }