//The challenge involving loops and switch, hello 
//This program is the implmentation of a menu system for a vector. Here various different operations are performed by the code 

#include<iostream>
#include<vector>

using namespace std;

int main()
{
char selection{};
vector<int>numbers{10,20,30};
do
{
    cout<<"P : printing numbers "<<endl<<"A : add a number "<<endl<<"M : mean of numbers"<<endl<<"S : displaying smallest number "<<endl<<"L : displaying largest number "<<endl<<"Q : quit "<<endl;
    cout<<"enter the choice "<<endl;
    cin>>selection;

    switch (selection)
    {
        case 'P':
        case 'p':
        {
          if(numbers.size()!=0)
          {
           for(auto val:numbers)
           {
            cout<<val<<endl;
           }
          }

          else
          {
            cout<<" The vector is empty "<<endl;
          }

        break;
        }

        case 'A':
        case 'a':
        {
           int read{};
           cout<<" Enter the number to add in the vector "<<endl;
           cin>>read;
           numbers.push_back(read);

        break;
        }

        case 'M':
        case 'm':
        {
           if(numbers.size()!=0)
           {
            int sum{};
            for(auto val: numbers)
            {
             sum+=val;
            }
            cout<<" The average of the vector is "<<sum/numbers.size()<<endl;
           }

           else
           {
            cout<<" The vector is empty "<<endl;
           }

        break;
        }


        case 'S':
        case 's':
        {
          if(numbers.size()!=0)
          {
            int small{numbers.at(0)};
            for(auto val: numbers)
            {
                if(val<small)
                {
                    small=val;
                }

                else 
                {
                    small=small;
                }

            }
            cout<<" The smallest number in the vector is "<<small<<endl;
            
          }

          else 
          {
            cout<<"The vector is empty "<<endl;
          }
            
        break;
        }


        case 'L':
        case 'l':
        {
         if(numbers.size()!=0)
         {
           int largest{};
           for(auto val:numbers)
           {
               if(val>largest)
                {
                  largest=val;
                }

                else
                {
                  largest=largest;
                }
           }

           cout<<" The largest number in the vector is "<<largest<<endl;
         }

         else 
         {
            cout<<"The vector is empty "<<endl;
         }

        break;
        }


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