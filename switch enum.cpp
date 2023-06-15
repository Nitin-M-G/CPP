#include<iostream>

using namespace std;

int main()
{
    enum Direction{left,right,up,down};

    Direction heading{right};

    switch(heading)
    {
        case left:
           cout<<" The direction is pointed towards left "<<endl;
           break;
        case right:
           cout<<" The direction is pointed towards right "<<endl;
           break;
        default:
           cout<<" OK "<<endl;
    }

    return 0;
}