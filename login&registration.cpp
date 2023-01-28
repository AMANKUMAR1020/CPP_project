#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

// content login Registration Forgot password exit
void login();
void forgot();
void registration();

int main()
{
    int c;
    cout<<"\t\t\t________________________________________\n\n\n";
    cout<<"\t\t\t         welcome to log in page         \n\n\n";
    cout<<"\t\t\t----------      MENU       -------------\n\n\n";
    cout<<"                                                \n\n";
    cout<<"\t| Press 1 to LOGIN            ||"<<endl;
    cout<<"\t| Press 2 to REGISSTRATION    ||"<<endl;
    cout<<"\t| Press 3 to FORGOT PASSWORD  ||"<<endl;
    cout<<"\t| Press 4 to EXIT             ||"<<endl;

    cout<<"\n\t\t\tEnter your choice : "<<endl;
    // cin>>c;
    // cout<<endl;
    while(1)
    {
        cin>>c;
        cout<<endl;
        switch(c)
        {
        case 1:
        {
            login();
            break;
        }
        case 2:
        {
            registration();
            break;
        }
        case 3:
        {
            forgot();
            break;
        }
        case 4:
        {
            cout<<"\n Thankyou! \n"<<endl;
            exit(0);
        }
        default : //default:
        {
            system("cls");
            cout<<"\t\t--------ERROR-------"<<endl;
        }
        }
    }
}

void login()
{
    int count;
    string userID,password,id,pass;
    system("cls");
    cout<<"\t\t\t please enter the username and password : \n"<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>userID;
    cout<<"\t\t\t PASSWORD ";
    cin>>pass;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if(id == userID && pass == password)
        {
            count = 1;
            system("cls");

        }
    }
    input.close();

    if(count == 1)
    {
        cout<<userID<<"\n Your LOGIN is successfull \n Thank for logging in | \n";
        main();
    }
    else
    {
        cout<<"\n LOGIN ERROR \n Please check your username and password\n";
        main();
    }
}

void registration()
{
    string ruserID,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>ruserID;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;

    ofstream f1("record.txt",ios::app);
    f1<<ruserID<<' '<<rpassword<<endl;
    cout<<"\n\t\t Registration is successfull! \n";
    main();
}

void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t You forgot the password? No worries \n"<<endl;
    cout<<"press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go to the main menu "<<endl;
    cout<<"\t\t\t Enter your choise : ";
    cin>>option;
    switch(option)
    {
    case 1:
    {
        int count = 0;
        string suserID,sId,spass;
        cout<<"\n\t\tEnter the username which you rememberd : ";
        cin>>suserID;

        ifstream f2("record.txt");
        while(f2>>sId>>spass)
        {
            if(sId == suserID)
            {
                count =1;
            }
            f2.close();
            if(count == 1)
            {
                cout<<"\n\n Your account is found!\n";
                cout<<"\n\n Your password is : "<<spass;
                main();
            }
            else
            {
                cout<<"\n\t Sorry! your account is not found! \n";
                forgot();
            }
            break;
        }

    }
    case 2:
    {
        main();
    }
    default:
    {
        cout<<"\t\t\t Wrong choice ! Please try again "<<endl;
        main();
    }
    }
}

