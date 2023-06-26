#include<iostream>
#include<string>

using namespace std;

//function prototyping 

string  print_guest_list(string[],size_t);
void clear_guest_list(string[],size_t);


void event_guests()  //main function
{

    string guest_list[]{"Nitin","Nishit","Sameer","Manju"};
    size_t guest_size{4};

    print_guest_list(guest_list,guest_size);  //Function calling with parameters passed 
    clear_guest_list(guest_list,guest_size); 
    print_guest_list(guest_list,guest_size);
}

string print_guest_list(string guest_list[],size_t guest_list_size)    //guest list printing function
{
    for(size_t i=0;i<guest_list_size;i++)
    {
        cout<<guest_list[i]<<" ";
    }
    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[],size_t guest_list_size)   //guest list clearing function
{
    for(size_t i=0;i<guest_list_size;i++)
    {
        guest_list[i]=" ";
    }
}

