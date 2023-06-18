#include<iostream>

#include<string>

using namespace std;



int main () {

   

    string pyr;

    cout << "Enter pyramid to display: " << endl;

    getline(cin, pyr);

    int position {0};

    int length = pyr.length();

    for (char c: pyr) {

        int num_spaces = length - position;

            do {cout << " ";

            --num_spaces;

        } while (num_spaces > 0);

        for (int i = 0 ; i < position ; i++) {

            cout << pyr.at(i);

        }

        cout << c;

        for (int j = position - 1 ; j >= 0; --j){

            cout << pyr.at(j);

        }

        position++;

        cout << endl;

       

    }

}