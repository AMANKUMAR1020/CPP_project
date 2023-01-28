#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;
public:

    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list_();
    void receipt();
} ;

void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t _________________________________________________\n";
    cout<<"\t\t\t\t                                                  \n";
    cout<<"\t\t\t\t                      SUPERMARKET                 \n";
    cout<<"\t\t\t\t                                                  \n";
    cout<<"\t\t\t\t _________________________________________________\n";

    cout<<"\t\t\t\t|  1) Admisistrator         |\n";
    cout<<"\t\t\t\t                            |\n";
    cout<<"\t\t\t\t|  2) Buyer                 |\n";
    cout<<"\t\t\t\t                            |\n";
    cout<<"\t\t\t\t|  3) Exit                  |\n";
    cout<<"\t\t\t\t                            |\n";
    cout<<"\t\t\t\t|     please select !\n";

    cin>>choice;

    while(1)
    {
        switch(choice)
        {
        case 1:
            {cout<<"\t\t\t please login \n";
            cout<<"\t\t\t Enter Email   \n";
            cin>>email;
            cout<<"\t\t\t password      \n";

            if(email == "robby@email.com" && password == "123")
            {
                administrator();

            }
            else
            cout<<"Invalid email/password";
            break;
            }

        case 2:
            {
                buyer();
            }

        case 3:
            {
                exit(0);
            }
        default :
            {
                cout<<"Please select from the given option \n";
            }
        }
    }
        goto m;
}

void shopping::administrator()
{
    int choice;
    cout<<"\n\n\n\t\t\t Admistrator menu";
    cout<<"\n\t\t\t____1) Add the product____|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t__2) Modify the product___|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t__3) Delete the product___|";
    cout<<"\n\t\t\t                          |";
    cout<<"\n\t\t\t__4) Back to main menu____|";
    cout<<"\n\t\t\t                          |";

    cout<<"\n\n\t Please enter you choice  ";
    cin>>choice

    while(1)
    {
        switch(choice)
        {
        case 1:
            {add();
            break;}

        case 2:
            {edit();
            break;}

        case 3:
            {rem();
            break;}

        case 4:
            {menu();
            break;}
        default:
            cout<<"Invaid number ! ";
        }
    }
    goto m;
}
void shopping::buyer()
{
    int choice;
    cout<<"\t\t\t  Buyer \n";
    cout<<"\t\t\t__________\n";
    cout<<"                \n";
    cout<<"\t\t\t 1) Buy product \n";
    cout<<"                \n";
    cout<<"\t\t\t 2) Go back\n";
    cout<<"\t\t\t Enter your choice : ";

    cin>>choice;

    while(1)
    {
        switch(choice)
        {
        case 1:
            {
                receipt();
                break;
            }

         case 2:
             {
                 menu();
             }
         default :
            {cout<<"invalid choice";}
        }
    }
    goto m;
}

void shopping::add()
{
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout<<"\n\n\t\t\t Add new product";
    cout<<"\n\n\t Product code of the product";

    cout<<pname;
    cout<<"\n\n\t Price of the product";

    cin>>price;
    cout<<"\n\n\t discount on product";
    cin>>dis;

    data.open("database.txt",ios::app|ios::out);

    data<<" "<<product<<" "<<price<<" "<<dis<<"\n";
    data.close();

else
    {
        data>>c>>n>>p>>d;

        while(!data.eof())
        {
            if(c == pcade)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    }

    if(token == 1)
     goto m;
    else
    {
        data.open("database.txt",ios::app|ios::out);
        data<<"  "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.closer();
    }
    cout<<"\n\n\n\t\t Record inserted !";
}

void shopping::edit()
{
    fsteam data,data1;
    int pkey, tokrn = 0, c;
    float p, d;
    string n;

    cout<<"\n\t\t\t Modify the record ";
    cout<<"\n\t\t\t Product code :";
    cin>>pkey;

    data.open("database.txt",ios::in);

    if(!data)
    {
        cout<<"\n\nfile doesn't exit! ";
    }
    else
    {
        data1.open("database.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;

        while(!data.eof())
        {
            if(pkey == pcode)
            {
                cout<<"\n\t\t Product new code :";
                cin>>c;

                cout<<"\n\t\t Name of the product :";
                cin>>n;

                cout<<"\n\t\t Price :";
                cin>>price;

                cout<<"\n\t\t discount :";
                cin>>d;

                detal<<" "<<c<<" "<<p<<" "<<d<<"\n";
                cout<<"\n\n\t\t Record edited ";

                token++;
            }

            else
            {
                detal<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token == 0)
        {
            cout<<"\n\nrecord not found ...  Sorry!";
        }
    }
}
