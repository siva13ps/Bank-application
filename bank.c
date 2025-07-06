#include<stdio.h>
#include<string.h>
#define MAX_MEMBERS 1
static int totalaccount=0;
struct member{
const char name[20];
char dob[15];
char gender;
char account[20];
char mail[20];
long long int mobile[20];
char username[15];
char password[15];
float balance;
}b[MAX_MEMBERS];
struct member b[MAX_MEMBERS];
void memberreg();
void login();
void showmenu(int);
int main()
{
    int choice;
    printf("\n\t\t****WELCOME TO SBI****");
    printf("\n 1.Member Register\n2.Login\n3.Exit");
    printf("\nSelect the choices:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            memberreg();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("\nExiting the application");
            break;
        default:
            printf("\nInvalid option");
            printf("\nEnter the correct choices:");
    }}
    void memberreg()
      {
        char confirm;
        printf("\n\t\t****REGISTRATION****");
        for(int i=1;i<=MAX_MEMBERS;i++)
        {
        printf("\nEnter name:");
        scanf("%s",b[i].name);
        printf("\nDOB-(DD/MM/YYYY):");
        scanf("%s",b[i].dob);
        printf("\ngender:");
        scanf("% c",&b[i].gender);
        printf("\nEnter the account number:");
        scanf("  %s ",&b[i].account);
        printf("\nEnter mail id:");
        scanf(" %s ",b[i].mail);
        printf("\nEnter your Mobile number:");
        scanf("  %lld ", &b[i].mobile);
        printf("\nEnter Username:");
        scanf(" %s ",b[i].username);
        printf("\nEnter password:");
        scanf(" %s ",b[i].password);
        printf("Initial Balance:");
        scanf("%f",&b[i].balance);
        }
        totalaccount++;
        printf("***Please confirm the entered information***");
        for(int i=1;i<=MAX_MEMBERS;i++)
        {
        printf("NAME:%s\nDOB:%s\nGENDER:% c ACCOUNT NO:%s \nMAIL ID:%s\nMOBILE NO:%lld\nUSERNAME:%s\nPASSWORD:%s",b[i].name,b[i].dob,b[i].gender,b[i].account,b[i].mail,b[i].mobile,b[i].username,b[i].password);}
        printf("\nSave?:Y/N-");
        scanf("%  c ",&confirm);
        if(confirm=='y'||confirm=='Y')
          {
        printf("\n****Registration Successful****");
        main();
          }
           else if((confirm=='n')||(confirm=='N'))
           {
            printf("Registration cancelled\n");
            memberreg();}

      }

           void login()
      {
        char names[20],pwd[15];
        printf("\nEnterUsername:");
        scanf("%s",&names);
        printf("\nEnter password:");
        scanf("%s",&pwd);
        for(int i=1;i<=totalaccount;i++)
        {
        if((names==b[i].name)&&(pwd==b[i].password))
            printf("\n****LOGIN SUCCESSULL****");
            showmenu(i);
            break;
        }
            printf("\nInvalid credentials,Try again!");
      }
      void showmenu(int i)
      {
          int choice;
          float amount,balance;
          printf("\n1.View Info\n2.Deposit\n3.Withdraw\n4.Logout");
          printf("Enter your choices:");
          scanf("%d",&choice);
          switch (choice)
          {
          case 1:
            printf("MEMBER[%d] Details:%[^\n]s",i,b[i].name);
            printf("ACCOUNT NO:%s",b[i].account);
            printf("Balance:%d",b[i].balance);
            break;
          case 2:
              printf("\nEnter the amount to be deposited:");
              scanf("%f",&amount);
             balance=b[i].balance+amount;
              printf("\nTotal balance:%f",balance);
              break;
          case 3:
            printf("\nEnter the amount to withdraw:");

            scanf("%f",&amount);
            balance=b[i].balance-amount;
            printf("\nTotal balance:%f",balance);
            break;
          case 4:
            printf("\nLogging out");
            break;
          default:
            printf("\nInvalid choice");
          }

          }







