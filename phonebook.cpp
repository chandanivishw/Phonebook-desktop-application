#include<iostream>
#include<windows.h>
using namespace std;
void start();
int menu();
int k=0;
int b=0;
bool blocked;
 int main()
{
    start();
    string block_name[50];
    string name[100];
    string no[100];
    int check=0;
    int Total_contacts=0;
    check=menu();
    do
    {
        //add contacts
        if(check==1)
        {
            cout<<"\t\t\t\t\t\t Name :";
            cin>>name[k];
            cout<<"\t\t\t\t\t\t Phone Number :";
            cin>>no[k];
            k++;
            Total_contacts++;
            blocked=false;
            
        }
        //display contacts
        else if(check==2)
        {
            for(int i=0;i<100;i++)
            {
                if(name[i]!="\0" )
                
                   cout<<"\t\t\t\t\t\t Name :"<<name[i]<<"     Phone :"<<no[i]<<endl;
                if( block_name[i]==name[i] && name[i]!="\0")
                {
                    cout<<"\t\t\t\t\t\tnow this number is blocked..\n";
                    cout<<"\t\t\t\t\t\tName :"<<"\033[1;31m"<<name[i]<<"\033[0m"<<endl;
                    cout<<"\t\t\t\t\t\tPhone :"<<"\033[1;31m"<<no[i]<<"\033[0m"<<endl;
                }
                   
                
            }
            

        }
        //search by number
        else if(check==3)
        {
            string temp;
            cout<<"\t\t\t\t\t\t Number :";
            cin>>temp;
            int check2=0;
            for(int i=0;i<100;i++)
            {
                if(temp==no[i])
                {
                    cout<<"\t\t\t\t\t\tNumber  is found..."<<endl;
                    cout<<"\t\t\t\t\t\tName :"<<name[i]<<"     Phone :"<<no[i]<<endl;
                    check2++;
                }
            }
            if(check2==0)
            {
                cout<<"\t\t\t\t\t\tThis number is not found in your contact list...";
            }
        }
        //search by name
        else if(check==4)
        {
            string temp;
            cout<<"\t\t\t\t\t\t Name :";
            cin>>temp;
            int check2=0;
            for(int i=0;i<100;i++)
            {
                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\t\tName is found..."<<endl;
                    cout<<"\t\t\t\t\t\tName :"<<name[i]<<"     Phone :"<<no[i]<<endl;
                    check2++;
                }
            }
            if(check2==0)
            {
                cout<<"\t\t\t\t\t\tThis name is not found in your contact list...";
            }
        }
        //update 
        else if(check==5)
        {
            string temp,temp2,temp3;
            cout<<"\t\t\t\t\t\tName :";
            cin>>temp;
            int check2=0;
            for(int i=0;i<100;i++)
            {
                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\t\tNew Name :";
                    cin>>temp2;
                    cout<<"\t\t\t\t\t\tNew Number :";
                    cin>>temp3;
                    name[i]=temp2;
                    no[i]=temp3;
                    check2++;
                    cout<<"\t\t\t\t\t\tUpdated successfully :";
                }
            }
            if(check2==0)
            {
                cout<<"\t\t\t\t\t\tThis name is not found in your contact list..";
            }

        }
        //delete
        else if(check==6)
        {
            string temp;
            cout<<"\t\t\t\t\t\t for Delete enter Name :";
            cin>>temp;
            int check2=0;
            for(int i=0;i<100;i++)
            {
                if(temp==name[i])
                {
                    cout<<"\t\t\t\t\t\tDeleted Successfully\n";
                    cout<<"\t\t\t\t\t\tName :"<<name[i]<<"     Phone :"<<no[i]<<endl;
                    name[i]="\0";
                    no[i]="\0";
                    check2++;
                    Total_contacts--;
                }
            }
            if(check2==0)
            {
                cout<<"\t\t\t\t\t\tThis name is not found in your contact list...\n";
            }
        }
        //delete all
        else if(check==7)
        {
            cout<<"\t\t\t\t\t\tAll Deleted successfully..";
            for(int i=0;i<k;i++)
            {
                name[i]="\0";
                no[i]="\0";
            }
            k=0;
            Total_contacts=0;
        }
            //display number of contacts
        else if(check==8)
        {
            cout<<"\t\t\t\t\t\tTotal Number of contact list are :"<<Total_contacts<<endl;

        }
        //blocked contacts
        else if(check==9)
        {
            
           cout<<"\t\t\t\t\t\tEnter the name you want to block..";
           
           cin>>block_name[b];
            blocked=true;
            for(int i=0;i<100;i++)
            {
                //cout<<"enter the name you want to block... ";
                //cin>>block_name[i];
                if(name[i]==block_name[i] && blocked==true)
                {
                    //blocked=true;
                    cout<<"\t\t\t\t\t\tContact blocked successfully\n:";
                    cout<<"\t\t\t\t\t\tName :"<<"\033[1;31m"<<name[i]<<"\033[0m"<<endl;
                    cout<<"\t\t\t\t\t\tPhone :"<<"\033[1;31m"<<no[i]<<"\033[0m"<<endl;
                }
               // break;
            }

            
        }
        

        check=menu();
    } while (check!=10);
    {

    }

    

}
int  menu()
{
    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n";
    cout<<"\t\t\t\t\t\t|     PHONE BOOK APPLICATION      |\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n";
    cout<<"\t\t\t\t\t\t|---------------------------------|\n";
    cout<<"\t\t\t\t\t\t|    [1] Add Contacts             |\n";
    cout<<"\t\t\t\t\t\t|    [2] Display all contacts     |\n";
    cout<<"\t\t\t\t\t\t|    [3] Search by Number         |\n";
    cout<<"\t\t\t\t\t\t|    [4] Search by Name           |\n";
    cout<<"\t\t\t\t\t\t|    [5] Update                   |\n";
    cout<<"\t\t\t\t\t\t|    [6] Delete                   |\n";
    cout<<"\t\t\t\t\t\t|    [7] Delete All               |\n";
    cout<<"\t\t\t\t\t\t|    [8] Number of Contacts       |\n";
    cout<<"\t\t\t\t\t\t|    [9] Blocked contacts         |\n";
    cout<<"\t\t\t\t\t\t|---------------------------------|\n";
    cout<<"\t\t\t\t\t\t|       [10] Exit                 |\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n";

    int a;
    cout<<"\n\t\t\t\t\t\tEnter your choice :";
    cin>>a;
    system("cls");
    return a;
}

void start()
{
    system("color 08");
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n;";
    cout<<"\t\t\t\t\t\t-----------------------------------\n";
    cout<<"\t\t\t\t\t\t      PHONE BOOK APPLICATION\n";
    cout<<"\t\t\t\t\t\t-----------------------------------\n\n";
    cout<<"\t\t\t\t\t\tLoading ";
    char x = 219;
    for(int i=0;i<35;i++)
    {
        cout<<x;
        if(i<10)
        Sleep(300);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
    }
    system("cls");
}