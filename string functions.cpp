#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[20]{};
    char temp[50]{};

    cout<<" Enter your first name"<<endl;
    cin>>first_name;

    cout<<" Enter your last name"<<endl;
    cin>>last_name;

    cout<<"Hello," <<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
    cout<<"and your last name,"<<last_name<<" has "<<strlen(last_name)<<" characters "<<endl;

    strcpy(full_name,first_name);     //first_name is being copied to full_name 
    strcat(full_name," ");            //adding space to the full name 
    strcat(full_name,last_name);      //concatenate the full_name to the last_name
    cout<<" Your full name is "<<full_name<<endl;/


    cout<<"-------------------------------------"<<endl;
    cout<<"using the traditional methods "<<endl;
    cout<<" Enter your full name "<<endl;
    cin>>full_name;
    cout<<"Your full name is "<<full_name<<endl;   //only the first name is being printed it showcases that the char is breaks when the complier meets a null character or a " "


    cout<<"-----------------------------------------------"<<endl;
    cout<<" Reading name using the getline() "<<endl;
    cout<<" Enter your full name "<<endl;
    cin.getline(full_name,50);       //getline function reads the full line with the limit of 50 characters
    cout<<" Your full name is "<<full_name<<endl;

    cout<<" --------------------------------------------"<<endl;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0)
    {
        cout<<temp<<" & "<<full_name<<" are the same "<<endl;
    }
    else 
    {
        cout<<temp<< " & "<<full_name<<" are different "<<endl;
    }

    cout<<"----------------------------------------"<<endl;


    for(size_t i{0};i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
        full_name[i]=toupper(full_name[i]);               //each character of the variable full_name is being converted to upper case using the toupper function
    }
    cout<<" Your full name is "<<full_name<<endl;



    cout<<"--------------------------------------"<<endl;
    if(strcmp(temp,full_name)==0)
    {
        cout<<temp<<" & "<<full_name<<" are same "<<endl;
    }
    else 
    {
        cout<<temp<<" & "<<full_name<<" are different "<<endl;
    }

     cout<<"-----------------------------------"<<endl;
     cout<<" Results of comparing "<<temp<<" & "<<full_name<<" : "<<strcmp(temp,full_name)<<endl;
     cout<<" Results of camparing "<<full_name<<" & "<<temp<<" : "<<strcmp(full_name,temp)<<endl;

     cout<<endl;




    

return 0;   
}