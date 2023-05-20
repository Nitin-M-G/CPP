#include<iostream>

using namespace std;

int main()
{
    char letter_grade{};
    cout<<" Enter the letter grade "<<endl;
    cin>>letter_grade;

    switch(letter_grade)
    {
        case 'a':
        case 'A':
        cout<<" You need a 90 or above , study hard  "<<endl;
        
        break;

        case 'b':
        case 'B':
        cout<<" You need 80-90 for a B ,go study hard "<<endl;

        break;

        case 'c':
        case 'C':
        cout<<" You need 70-79 for an average grade "<<endl;
        break;

        case 'd':
        case 'D':
        cout<<" You need to get a better grade.All you need is 60-69 "<<endl;
        break;

        default:
        cout<<" Sorry, grade not available "<<endl;


    }
}