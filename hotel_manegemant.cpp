#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;

    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0; //quantity left

    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0; //quantity sold

    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0; //total price

    cout<<"\nQuantity of item we have";
    cout<<"\n Room available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin>>Qchicken;

    cout<<"\n\t\t\t please select from the menu option ";
    cout<<"\n\n 1.Rooms\n2.pasta\n 3.burger\n 4.noodles\n 5.shake\n 6.chicken-roll\n 7.Information regarding sales and collection 8.exit";
  //cout<<"\n enter your choice! ";
  //cin>>choice;
    while(1)
    {
        cout<<"\n enter your choice! ";
         cin>>choice;
        switch(choice)
        {
        case 1:
         {
           cout<<"\n\n Enter number of rooms you want: ";
           cin>>quant;
           if(Qrooms-Srooms>=quant)
           {
               Srooms=Srooms + quant;
                   Total_rooms = Total_rooms + (quant*1200);
                   cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! ";
           }
           else
           {cout<<"\n\tonly"<<Qrooms-Srooms<<" Rooms remaining in hotel ";
            break;}
         }
        case 2:
         {
           cout<<"\n\n Enter pasta quantity: ";
           cin>>quant;
           if(Qpasta-Spasta>=quant)
           {
               Spasta=Spasta + quant;
                   Total_pasta= Total_pasta + (quant*250);
                   cout<<"\n\n\t\t"<<quant<<"pasta is the order! ";
           }
           else
           {cout<<"\n\tonly"<<Qpasta-Spasta<<" pasta remaining in hotel ";
            break;}
         }
        case 3:
         {
            cout<<"\n\n Enter burger quantity: ";
           cin>>quant;
           if(Qburger-Sburger>=quant)
           {
               Sburger=Sburger + quant;
                   Total_burger= Total_burger + (quant*110);
                   cout<<"\n\n\t\t"<<quant<<"burger is the order! ";
           }
           else
           {cout<<"\n\tonly"<<Qburger-Sburger<<" burger remaining in hotel ";
            break;}
         }
        case 4:
           {
            cout<<"\n\n Enter noodles quantity: ";
           cin>>quant;
           if(Qnoodles-Snoodles>=quant)
           {
               Snoodles=Snoodles + quant;
                   Total_noodles= Total_noodles + (quant*120);
                   cout<<"\n\n\t\t"<<quant<<"noodles is the order! ";
           }
           else
           {cout<<"\n\tonly"<<Qnoodles-Snoodles<<" noodles remaining in hotel ";
            break;}
           }
        case 5:
          {
            cout<<"\n\n Enter shake quantity: ";
           cin>>quant;
           if(Qshake-Sshake>=quant)
           {
               Sshake=Sshake + quant;
                   Total_shake=Total_shake + (quant*150);
                   cout<<"\n\n\t\t"<<quant<<"pasta is the order! ";
           }
           else
           {cout<<"\n\tonly"<<Qshake-Sshake<<" pasta remaining in hotel ";
            break;}
          }
        case 6:
            {
           cout<<"\n\n Enter chicken_roll quantity: ";
           cin>>quant;
           if(Qchicken-Schicken>=quant)
           {
               Schicken=Schicken + quant;
                   Total_chicken=Total_chicken + (quant*150);
                   cout<<"\n\n\t\t"<<quant<<"chicken is the order! ";
           }
           else
           {cout<<"\n\tonly"<<Qchicken-Schicken<<" chicken remaining in hotel ";
            break;}

            }
        case 7:
            {
                cout<<"\n\t Details of sales and collection ";
                cout<<"\n\nNumber of rooms we had : "<<Qrooms;
                cout<<"\n\nNumber of rooms we gave for rent"<<Total_rooms;
                cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
                cout<<"\n\n\t Remaining rooms collection for the day :"<<Total_rooms;

                cout<<"\n\nNumber of pasta we had : "<<Qpasta;
                cout<<"\n\nNumber of pasta we sold "<<Spasta;
                cout<<"\n\nRemaining pasta : "<<Qpasta-Spasta;
                cout<<"\n\n\t Total Pasta collection for the day :"<<Total_pasta;

                cout<<"\n\nNumber of burger we had : "<<Qburger;
                cout<<"\n\nNumber of burger we sold "<<Sburger;
                cout<<"\n\nRemaining burger : "<<Qburger-Sburger;
                cout<<"\n\n\t Total burger collection for the day :"<<Total_burger;

                cout<<"\n\nNumber of noodles we had : "<<Qnoodles;
                cout<<"\n\nNumber of noodles we sold "<<Snoodles;
                cout<<"\n\nRemaining noodles : "<<Qnoodles-Snoodles;
                cout<<"\n\n\t Total noodles collection for the day :"<<Total_noodles;

                cout<<"\n\nNumber of shake we had : "<<Qshake;
                cout<<"\n\nNumber of shake we sold "<<Sshake;
                cout<<"\n\nRemaining shake : "<<Qshake-Sshake;
                cout<<"\n\n\t Total shake collection for the day :"<<Total_shake;


                cout<<"\n\nNumber of chicken roll we had : "<<Qchicken;
                cout<<"\n\nNumber of chicken roll we sold "<<Schicken;
                cout<<"\n\nRemaining chicken roll : "<<Qchicken-Schicken;
                cout<<"\n\n\t Total chicken roll collection for the day :"<<Total_chicken;
            }

        case 8:
            exit(0);

        default:
            cout<<" --------Error------- ";

        }

    }
}
