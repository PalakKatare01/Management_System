
#include<iostream>
#include <string>
#include<fstream>
#include <windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <graphics.h>

// driver code

    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file


using namespace std;



// creating class
class bank{
    //creating private class for safety perpose
private:
    int pin;
    float balance;
    string id,passWord,fName,country,phone;
public:
    void menu();
    void bank_management();
    void atm_management();
    void newuser();
    void already_user();
    void deposite_option();
    void withdraw_option();
    void transfer_option();
    void payment_option();
    void search_option();
    void edit_option();
    void delete_option();
    void show_all();
    void user_balance();
    void withdraw_amount();
    void account();

};
void intro(){
//intro 1
   system("Color B0");
    cout<<"\n\n\t\t\t\t";
    cout<<"\t\t\t\t\n\n";
    cout<<"\n\n\t\t ";
    cout<<"\n\n\t\t ";

     for(int i =1 ; i<=15; i++){
        cout<<"  *  ";
    }
    cout<<"\n\n\t\t ";
    cout<<"\n\n\t\t ";
    cout<<"\n\n\t\t\t\t\t**** Management System ****\n\t\t\t\t\t\t """"ATM + BANK """" \n\t\t\t\t\t**** Project in C++ ****\n"<<endl;

    cout<<"\n\n\t\t ";
    cout<<"\n\n\t\t ";
    for(int i =1 ; i<=15; i++){
        cout<<"  *  ";
    }
    _getch();
    //Into 2
    system("cls");
    cout<<"\n\n\t\t\t";
    for(int i=2;i<25;i++){
        cout<<"-*-";
    }
    cout<<"\n\n\t\t\t";
    cout<<"\n\n\t\t";
    cout<<"\n\n\t\t\t\t  ******* About Project *******\n\t\t\t\t\t\t ( 1.) OOP's Concept \n\t\t\t\t\t\t ( 2.) File Handling \n\t\t\t\t\t\t ( 3.) Functions"<<endl;
    cout<<"\n\n\t\t";
    cout<<"\n\n\t\t";
    for(int i=2;i<25;i++){
        cout<<"-*-";
    }
    _getch();
    //intro 3
    system("cls");
    cout<<"\n\n\t\t\t";
    for(int i=2;i<25;i++){
        cout<<"-*-";
    }
    cout<<"\n\n\t\t";
    cout<<"\n\n\t\t";
    cout<<"\n\n\t\t\t\t\t  *******  Developer Details ******\n\t\t\t\t\t\t | Name : Palak Katare  \n\t\t\t\t\t\t | Duration : 3 weeks \n\t\t\t\t\t\t | Line of Code : 858 "<<endl;

    cout<<"\n\n\t\t";
    cout<<"\n\n\t\t";
    for(int i=2;i<25;i++){
        cout<<"-*-";
    }
    _getch();

}

void bank::menu(){
    p:
    system("Color C0");
    system("cls");

    int choice;
    char ch;
    string pin, pass,email;
    cout<<"\n\n\t\t\t\tManagement System"<<endl;
    cout<<"\n1. Bank management";
    cout<<"\n2. ATM management";
    cout<<"\n3. Exit";
    cout<<"\nPlease enter choice: ";
    cin>>choice;
    switch(choice){
    case 1:
        system("cls");
        cout<<"\n\n\t\t\tLogin Account";
        cout<<"\n\n\t\t\tEmail: ";
        cin>>email;
        cout<<"\n\t\t\tPin Code: ";
        for(int i=1;i<5;i++){
            ch=_getch();
            pin+=ch;
            cout<<"*";
        }
        cout<<"\n\t\t\tPassword: ";
        for(int i=1;i<5;i++){
            ch=_getch();
            pass+=ch;
            cout<<"*";
        }
        if(email=="auto.com" && pin=="1234" && pass=="1234"){
             Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);
             bank_management();
        }
       else
          cout<<"\n\n\t\t Your Email Pin  and Password is wrong";
        break;
    case 2:
        atm_management();
        break;
    case 3:
    Beep(1097, 1400);
    Beep(1097, 1400);
    Beep(1075, 1000);
        exit(0);
    default:
        cout<<"\nINVALID VALUE!!!!\nPlease try again";
    }
    _getch();
    goto p;
}


void bank::bank_management(){
p:
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t\tBANK management system";
    cout<<"\n1.New User";
    cout<<"\n2.Already User";
    cout<<"\n3.Deposit Option";
    cout<<"\n4.Withdraw Option";
    cout<<"\n5.Transfer Option";
    cout<<"\n6.Payment Option";
    cout<<"\n7.Search User record";
    cout<<"\n8.Edit User record";
    cout<<"\n9.Delete User record";
    cout<<"\n10.Show all record";
    cout<<"\n11.Go back";
    cout<<"\n\nEnter user choice: ";
    cin>>choice;
    switch(choice){
    case 1:
        system("cls");
        cout<<"\n\nNew User";
        newuser();
        break;
    case 2:
        system("cls");
        int amount;
        cout<<"\n\nAlready User ";
        already_user();
        break;
    case 3:
        system("cls");
        cout<<"Deposit Details";
        deposite_option();
        break;
    case 4:
        system("cls");
        cout<<"Withdraw Option";
        withdraw_option();
        break;
    case 5:
        system("cls");
        cout<<"Transfer Option";
        transfer_option();
        break;
    case 6:
        system("cls");
        cout<<"Payment Option";
        payment_option();
        break;
    case 7:
        system("cls");
        cout<<"Search Record";
        search_option();
        break;
    case 8:
        system("cls");
        cout<<"Edit User";
        edit_option();
        break;
    case 9:
        system("cls");
        cout<<"Delete User";
        delete_option();
        break;
    case 10:
        system("cls");
        cout<<"Show all";
        show_all();
        break;

    case 11:
        menu();
    default:
       cout<<"\nINVALID VALUE!!!!\nPlease try again";
    }
    _getch();
    goto p;



}


void bank::atm_management(){
    p:
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t\tATM management system";
    cout<<"\n1.User login and Check balance";
    cout<<"\n2.Withdraw Money";
    cout<<"\n3.Accout Detailes";
    cout<<"\n4.Go Back";
    cout<<"\n\nEnter user choice: ";
    cin>>choice;
    switch(choice){
    case 1:
        system("cls");
        cout<<"\n\nUSER LOGIN AND CHECK BALANCE";
        user_balance();
        break;
    case 2:
        system("cls");
        int amount;
        cout<<"\n\nWithdraw Money";
        withdraw_amount();
        break;
    case 3:
        system("cls");
        cout<<"\n\nAccount Details";
        account();
        break;

    case 4:
        menu();
    default:
       cout<<"\nINVALID VALUE!!!!\nPlease try again";
    }
    _getch();
    goto p;

}

//BANK MANAGEMENT DESCRIPTION

void bank::newuser(){

    p:
        system("cls");
    fstream file;
    //temporary data for file handling
    int p;
    float b;
    string iD,pW,fN,ph;
     cout<<"\n\n\nUser Id: ";
     cin>>id;
     cout<<"\nName: ";
     cin>>fName;
     cout<<"\nPin Code: ";
     cin>>pin;
     cout<<"\nPassword: ";
     cin>>passWord;
     cout<<"\nPhone no: ";
     cin>>phone;
     cout<<"\nBalance: ";
     cin>>balance;
     //for checking if the id is unique or not
    file.open("main.txt",ios::in);
    if(!file){
        file.open("main.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    else{
        file>>iD>>fN>>p>>pW>>ph>>b;
        while(!file.eof()){
            if(id==iD){
                cout<<"\nUser Id already exist";
                _getch();
                goto p;
            }
            file>>iD>>fN>>p>>pW>>ph>>b;
        }
        file.close();
        file.open("main.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<fName<<" "<<country<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        file.close();
    }
    cout<<"\n\n New user account added successfully";
}
void bank::already_user(){
    system("cls");
    int found=0;
    fstream file;
    string a_id;
    cout<<"\n\n\t\t\tAlready User details ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error...."<<endl;
    }
    else{
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof()){
        if(a_id==id){
            system("cls");
            cout<<"\n\n\t\tUser details"<<endl;
            for(int i =1 ; i<=15; i++){
            cout<<"  *  ";
            }
            cout<<"\n\n || "<<" User ID: "<<id<<" || "<<" Pin Code: "<<pin<<" || "<<" Password: "<<passWord<<" || "<<endl;
            found++;
            for(int i =1 ; i<=15; i++){
        cout<<"  *  ";
    }
        }

        file>>id>>fName>>pin>>passWord>>phone>>balance;
        }
        file.close();
        if(found==0){
            cout<<"\nUser Id not found...";
        }
    }
}
void bank::deposite_option(){
    system("cls");
    fstream file,file1;
    string a_id;
    int found=0;
    float amount=0;
    cout<<"\n\n\t\t\tDeposit Money ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error....";
    }
   else
    {
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof())
        {
        if(a_id==id){
            system("cls");
            cout<<"\n\nEnter amount for deposit: ";
            cin>>amount;
           balance=balance+amount;
           file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
            found++;
            cout<<"\n\nYour amount "<<amount<<" Successfully added"<<endl;
        }
        else{
        file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        }
         file>>id>>fName>>pin>>passWord>>phone>>balance;
       }
        file.close();
        file1.close();
        remove("main.txt");
        rename("main1.txt","main.txt");
        if(found==0){
            cout<<"\nUser Id not found...";
        }
    }

}
void bank::withdraw_option(){
    system("cls");
    fstream file,file1;
    string a_id;
    int found=0;
    float withdraw=0;
    cout<<"\n\n\t\t\tDeposit Money ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error....";
    }
   else
    {
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof())
    {
        if(a_id==id){
            system("cls");
            cout<<"\n\nEnter amount for withdraw: ";
            cin>>withdraw;
            if(withdraw<=balance){
           balance=balance-withdraw;
           file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
           Beep(200,800);
           Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);
            cout<<"\nWithdraw amount is "<<withdraw<<" Successfully Withdraw"<<endl;
            cout<<"\nYour current balance is "<<balance;
            }
            else{
            file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
            cout<<"\n\nYour current balance is "<<balance;
           }
            found++;
        }
        else{
        file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        }
         file>>id>>fName>>pin>>passWord>>phone>>balance;
    }
        file.close();
        file1.close();
        remove("main.txt");
        rename("main1.txt","main.txt");
            if(found==0){
            cout<<"\nUser Id not found...";
        }
    }



}
void bank::transfer_option(){
    fstream file,file1;
    system("cls");
    string s_id,r_id;
    float amount;
    int found=0;
    cout<<"\n\n\t\t\tPayment transaction ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening error.....";
    }
    else{
        cout<<"\nEnter sender Id: ";
        cin>>s_id;
        cout<<"\nEnter receiver Id: ";
        cin>>r_id;
        cout<<"\nEnter amount for transaction: ";
        cin>>amount;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;
        while(!file.eof())
        {
                if(s_id==id && amount<=balance)
                 found=found+1;

                else if(r_id==id)
                found=found+1;
                file>>id>>fName>>pin>>passWord>>phone>>balance;

        }
         file.close();

            if(found==2){
                file.open("main.txt",ios::in);
                file1.open("main1.txt",ios::app|ios::out);
                file>>id>>fName>>pin>>passWord>>phone>>balance;
                while(!file.eof()){
                        if(s_id==id ){
                            balance=balance-amount;
                            file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;

                        }
                        else if(r_id==id){
                            balance=balance+amount;
                            file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;

                        }
                        else{
                             file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
                        }
                       file>>id>>fName>>pin>>passWord>>phone>>balance;
                }
                file.close();
                file1.close();
                remove("main.txt");
                rename("main1.txt","main.txt");
                cout<<"\nSenders current balance is "<<balance;
                cout<<"\nReceiver current balance is "<<balance;
             }
            else{
                cout<<"\n\nTransaction Id does not exist..!!!";
            }

    }
}
void bank::payment_option(){
    system("cls");
    fstream file,file1;
    string t_id;
    string b_name;
    float amount;
    int found=0;
    SYSTEMTIME x;
    cout<<"\n\n\t\tBills Payment section ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\nFile does not exist.....";
    }
    else{
        cout<<"\nEnter user Id: ";
        cin>>t_id;
        cout<<"\nBill Name: ";
        cin>>b_name;
        cout<<"\nBill Amount: ";
        cin>>amount;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;
        while(!file.eof())
        {
            file>>id>>fName>>pin>>passWord>>phone>>balance;
             if(t_id==id && balance>=amount)
             {
                balance=balance-amount;
                file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
                 found++;
             }
             else{
                file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
             }
             file>>id>>fName>>pin>>passWord>>phone>>balance;
         }
            file.close();
            file1.close();
            remove("main.txt");
            rename("main1.txt","main.txt");
            if(found==1){
                GetSystemTime(&x);
                file.open("bill.txt",ios::app|ios::out);
                file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<endl;
                file.close();
                cout<<"\n\nBill Payment for "<<b_name<<" is done";
                cout<<"\nCurrent Balance: "<<balance;
            }
            else{
                cout<<"\nAmount is exceeds...";
            }
    }



}
void bank::search_option(){
    system("cls");
    fstream file;
    string t_id;
    int found=0;
    cout<<"\n\nSearch User account";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile does not exist";
    }
    else{
        cout<<"\n\nEnter User Id: ";
        cin>>t_id;
        file>>id>>fName>>pin>>passWord>>phone>>balance;
        while(!file.eof()){
            if(t_id==id){
                system("cls");
                cout<<"\n\nSearch User RECORD";
                cout<<"\n\n|| User Id: "<<id<<" || Name: "<<fName<<" || Pin: "<<pin<<" || Password: "<<passWord<<" || Phone: "<<phone<<" || Balance: "<<balance<<" || "<<endl;
                found++;
            }
            file>>id>>fName>>pin>>passWord>>phone>>balance;

        }
        file.close();
        if(found==0){
            cout<<"\nUser Record is not found...";
        }
    }




}
void bank::edit_option(){
    system("cls");
    fstream file,file1;
    string t_id,name,p,pW,ph;
    float b;
    int found=0;
    cout<"\n\n\t\tEdit Option";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Does not exist....";
    }
    else{
        cout<<"\nUser Id: ";
        cin>>t_id;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;
       while(!file.eof()){
        if(t_id==id){
             cout<<"\nName: ";
             cin>>name;
             cout<<"\nPin Code: ";
             cin>>p;
             cout<<"\nPassword: ";
             cin>>pW;
             cout<<"\nPhone no: ";
             cin>>ph;
             file1<<" "<<id<<" "<<name<<" "<<p<<" "<<pW<<" "<<ph<<" "<<balance<<endl;
             cout<<"\nYour details edit successfully";
             found++;

        }
        else{
            file1<<" "<<id<<" "<<fName<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        }
        file>>id>>fName>>pin>>passWord>>phone>>balance;
       }
       file.close();
       file1.close();
       remove("main.txt");
       rename("main1.txt","main.txt");
       if(found==0)
        cout<<"\n\nUser Id can't found";
    }
}
void bank::delete_option(){
    system("cls");
    fstream file,file1;
    string t_id;
    int found=0;
    cout<"\n\n\t\tDelete User";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Does not exist....";
    }
    else{
        cout<<"\nUser Id: ";
        cin>>t_id;
        file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;
       while(!file.eof()){
        if(t_id==id){
             //file1<<" "<<id<<" "<<name<<" "<<p<<" "<<pW<<" "<<ph<<" "<<balance<<endl;
             cout<<"\nDeleted successfully";
            found++;
        }
        else{
            file1<<" "<<id<<" "<<fName<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
        }
        file>>id>>fName>>pin>>passWord>>phone>>balance;
       }
       file.close();
       file1.close();
       remove("main.txt");
       rename("main1.txt","main.txt");
       if(found==0)
        cout<<"\n\nUser Id can't found";
    }

}
void bank::show_all(){
    system("cls");
    system("Color B5");
    fstream file;
    int found=0;
    cout<<"\n\n\t\t\t\t Show All Records";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\nFile does not exist...";
    }
    else{
        cout<<"\n\n\n\t\t\t\t Records\n\n";

        file>>id>>fName>>pin>>passWord>>phone>>balance;
        while(!file.eof()){
        cout<<"\n\n User Id: "<<id<<" || Name: "<<fName<<" || Pin: "<<pin<<" || Password: "<<passWord<<" || Phone:"<<phone<<" || Balance: "<<balance<<" ||"<<endl;
        cout<<"\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        found++;
        file>>id>>fName>>pin>>passWord>>phone>>balance;
       }
       file.close();
       if(found==0){
        cout<<"\n\nData base is empty....";
       }
    }

}

//ATM MANAGEMENT DESCRIPTION
void bank::user_balance(){
    system("cls");
    system("Color C0");
    int found=0;
    fstream file;
    string a_id,p_word;
    cout<<"\n\n\t\t\tAlready User details ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error...."<<endl;
    }
    else{
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        cout<<"\n\nEnter Password: ";
        cin>>p_word;
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof()){
        if(a_id==id && p_word==passWord){
            system("cls");
            cout<<"\n\n\t\t\t\tYour details"<<endl;
            cout<<"\n\n";
        for(int i =1 ; i<=15; i++){
        cout<<"  *  ";
    }
            cout<<"\n\n\t\t\t\tUser ID: "<<id<<"\n\n\t\t\t\tName: "<<fName<<"\n\n\t\t\t\tPin Code: "<<pin<<"\n\n\t\t\t\tBalance "<<balance<<endl;
            found++;
            for(int i =1 ; i<=15; i++){
        cout<<"  *  ";
    }
        }

        file>>id>>fName>>pin>>passWord>>phone>>balance;
        }
        file.close();
        if(found==0){
            cout<<"\nUser Id not found...";
        }
    }


}
void bank::withdraw_amount(){
    system("cls");
    fstream file;
    string a_id,pasW;
    int found=0,pinCode;
    float withdraw=0;
    cout<<"\n\n\t\t\t Withdraw Amount ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error....";
    }
   else
    {
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        cout<<"\n\nEnter passWord: ";
        cin>>pasW;
        cout<<"\n\nEnter pinCode: ";
        cin>>pinCode;
       // file1.open("main1.txt",ios::app|ios::out);
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof())
    {
        if(a_id==id && pasW==passWord && pinCode==pin){
            system("cls");
            cout<<"\n\nEnter amount for withdraw: ";
            cin>>withdraw;
            if(withdraw<=balance){
             balance=balance-withdraw;
           //file1<<" "<<id<<" "<<fName<<" "<<" "<<pin<<" "<<passWord<<" "<<phone<<" "<<balance<<endl;
            Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);

            cout<<"\nWithdraw amount is "<<withdraw<<" Successfully Withdraw"<<endl;
            cout<<"\nYour current balance is "<<balance;
            }
            else{

            cout<<"\n\nYour current balance is "<<balance;
           }
            found++;
        }

         file>>id>>fName>>pin>>passWord>>phone>>balance;
    }
        file.close();
        if(found==0){
            cout<<"\nUser Id not found...";
        }
    }


}
void bank::account(){
     system("cls");
    int found=0;
    fstream file;
    string a_id,phone_num;
    cout<<"\n\n\t\t\tAlready User details ";
    file.open("main.txt",ios::in);
    if(!file){
        cout<<"\n\nFile Opening Error...."<<endl;
    }
    else{
        cout<<"\n\nEnter user id: ";
        cin>>a_id;
        cout<<"\n\nPhone number: ";
        cin>>phone_num;
        file>>id>>fName>>pin>>passWord>>phone>>balance;

        while(!file.eof()){
        if(a_id==id && phone_num==phone){
            system("cls");
            cout<<"\n\n\t\tUser details\n\n\n"<<endl;
            for(int i =2 ; i<=15; i++){
            cout<<"  *  ";
            }
            cout<<"\n\n\n";
            cout<<"\n\n || User ID: "<<id<<" || Pin Code: "<<pin<<" || Password: "<<passWord<<" || Phone number: "<<phone<<" || Balance: "<<balance<<endl;
            found++;
            cout<<"\n\n\n";
            for(int i =2 ; i<=15; i++){
        cout<<"  *  ";
    }
        }

        file>>id>>fName>>pin>>passWord>>phone>>balance;
        }
        file.close();
        if(found==0){
            cout<<"\nUser Id not found...";
        }
    }
}


int main()
{

    bank obj;
    intro();
    obj.menu();
    //printf("Hello world!\n");
    return 0;
}

