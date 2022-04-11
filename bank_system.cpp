            // BANK MANAGEMENT PROJECT
#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;

class bank{
    char name[100];
    char add[100],y;
    float balance;
public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account(){
    cout<<"Enter your Full name :: ";
    cin.ignore();
    cin.getline(name, 100);
    cout<<"Enter your address :: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of Account you want to open saving (s) or current (c) :: ";
    cin>>y;
    cout<<"Enter amount for deposite :: ";
    cin>>balance;
    cout<<"Your Account is created.";
}

void bank::deposite_money(){
    int amount;
    cout<<"Enter how much you deposite :: ";
    cin>>amount;
    balance+=amount;
    amount+=amount;
    cout<<"Your total balnce is ::"<<balance;
}

void bank::withdraw_money(){
    float sub_amount;
cout<<endl<<"Withdraw ::";
cout<<"Enter amount to withdraw :: ";
cin>>sub_amount;
balance-=sub_amount;
cout<<"Now, Total amount is left :: "<<balance;
}

void bank::display_account(){
cout<<setw(10)<<"Your full name :: "<<setw(10)<<name<<endl;
cout<<setw(10)<<"Your address :: "<<setw(10)<<add<<endl;
cout<<setw(10)<<"Type of Account that you open :: "<<setw(10)<<y<<endl;
cout<<setw(10)<<"Amount you deposited :: "<<setw(10)<<balance<<endl;
}

int main()
{
    int ch;
    char x;
    bank obj;
    do{
        cout<<"1) Open Account \n";
        cout<<"2) Deposite Money \n";
        cout<<"3) Withdraw Money \n";
        cout<<"4) Display Account \n";
        cout<<"5) Exit\n";
        cout<<"Select the option from above \n";
        cin>>ch;
        switch(ch){
         case 1:
                cout<< "1) open account \n";
                obj.open_account();
                  break;
         case 2:
                cout<< "2) Deposite money \n";
                obj.deposite_money();
                  break;
         case 3:
                cout<< "3) Withdraw money \n";
                obj.withdraw_money() ;
                break;
         case 4:
                cout<<"4) Display amount \n";
                obj.display_account();
                break;
         case 5:
                if(ch==5){
                 exit(1);
                }

         default:
                cout<<"This is not exist try again \n";
        }


        cout<<"\n Do you want to select next option then press :: y\n";
        cout<<"If you want to exit then press :: N"<<endl;
        x=getch();
        if(x=='n' || x=='N')
            {
              exit(0);
             }

    }while(x=='y' || x=='Y');

    getch();
    return 0;
}

