#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int menu()
{
    printf("============  Bank Managment System  ===========\n\n");
    printf("Welcome to our Bank Managment System\n\n");
    printf("Please read all information below to use this system\n\n");
    printf("1. Enter A to Create customer New account.\n2. Enter V to see all of your information.\n3. Enter E to edit your customer information.\n4. Enter D to Deposite money.\n5. Enter C to caseout money.\n6. Enter  B to see balance of your account.\n7.Enter R to recover your Password.\n8.Enter P to change your password or pin.\n9.Enter Z to delete your account.\n10. Enter F to close this system\n");


    char symbol;
    int symbol1;
    int symbol2;
    char first_name[20];
    char middle_name[20];
    char last_name[20];
    int number;
    char address[20];
    int date,month,year;
    int serial;
    char citizen[20];
    int password,re_password;

    char first_name1[20];
    char middle_name1[20];
    char last_name1[20];
    int number1;
    char address1[20];
    int date1,month1,year1;
    int serial1;
    char citizen1[20];
    int password1,re_password1;
    int money=0;
    int money1;
    int money2;

    char a1[10]="YES",a[20];
    char a2[10]="NO";
    char input1[10];
    char input2;
    for(int i=0;; i++)
    {
        printf("\n\n\nPlease enter your choice:\n");
label :
        scanf("%c",&symbol);

        if(symbol=='Q')
        {
            printf("|| Exited ||");
            break;
        }
        else if(symbol=='A')
       {
need_account :
            printf("Give your all informations please to create new account:\n\n");
            printf("Full Name: ");
            scanf("%s%s",&first_name,&last_name);

            printf("\nEnter your number:  (+880)");
            scanf("%d",&number);

            printf("\nEnter your address  :");
            scanf("%s",&address);

            printf("\nEnter your birthdate(like 01/12/2000):  ");
            scanf("%d/%d/%d",&date,&month,&year);

            printf("\nEnter your pin number:  ");
            scanf("%d",&serial);

            printf("\nEnter your citizenship:  ");
            scanf("%s",&citizen);

            printf("\nEnter your password (your password should be integer):  ");
            scanf("%d",&password);

            printf("\nPlease re-enter your passwod:  ");
need_password7:
            scanf("%d",&re_password);

            if (password!=re_password)
            {
                printf("\nPlease re-enter your passwod:  ");
                goto need_password7;
            }
        }


        else if(symbol=='V')
        {
            printf("Enter your password to log in\n");
need_passowrd :
            scanf("%d",&symbol1);
            if(!password)
            {
                printf("NOT FOUND\n\nFirst create your account\nWould you want to create account?(Yes or No - enter all letter in upper case)\n");
                printf("Enter your Choice:\n");
                scanf("%s",&input1);
                if(0==strcmp(input1,a1))
                {
                    goto need_account;
                }
            }
            else  if(symbol1==password)
            {
                printf("Name: %s %s\n",first_name,last_name);
                printf("Address: %s\n",address);
                printf("Number: %d\n",number);
                printf("Date of birth: %d/%d/%d\n",date,month,year);
                printf("Citizenship: %s\n",citizen);
                printf("Pin Number: %d\n",serial);

            }
            else
            {
                printf("Password doesn't matched\nRe-enter your password\n");
                goto need_passowrd;
            }
        }
        else if(symbol=='E')
        {
            printf("please Enter your password to log in: ");
need_password1 :
            scanf("%d",&symbol1);
            if(symbol1==password)
            {
                printf("\n\n===============Edit===============\n\n");

                printf("First Name:  ");
                scanf("%s",&first_name1);
                for(int i=0; i<20; i++)
                {
                    first_name[i] = first_name1[i];
                }

                printf("Last Name:  ");
                scanf("%s",&last_name1);
                for(int i=0; i<20; i++)
                {
                    last_name[i] = last_name1[i];
                }
                printf("Enter your number:  ");
                scanf("%d",&number);

                printf("Enter your address:  ");
                scanf("%s",&address1);
                for(int i=0; i<20; i++)
                {
                    address[i] = address1[i];
                }

                printf("Enter your birthdate():  ");
                scanf("%d/%d/%d",&date,&month,&year);




                printf("Enter your serial pin number:  ");
                scanf("%d",&serial);




                printf("Enter your citizenship:  ");
                scanf("%s",&citizen1);
                for(int i=0; i<20; i++)
                {
                    citizen[i] = citizen1[i];
                }




            }


            else
            {
                printf("Password doesn't matched\nRe-enter your password\n");
                goto need_password1;
            }
        }
        else if(symbol=='D')
        {

            printf("please Enter your password to log in: ");
need_password3:
            scanf("%d",&symbol1);
            if(!password)
            {
                printf("NOT FOUND\n\nFirst create your account\nWould you want to create account?(Yes or No - enter all letter in upper case)\n");
                printf("Enter your Choice:\n");
                scanf("%s",&input1);
                if(0==strcmp(input1,a1))
                {
                    goto need_account;
                }
            }

            else if(symbol1==password)
            {
                printf("How much you want to Deposit?\n");
                scanf("%d",&money1);
                money=money+money1;
                printf("Please confirm your pin:  ");
need_pin2:
                scanf("%d",&symbol2);
                if(symbol2==serial)
                {
                    printf("Deposited Successful.\nYour current balace is %d",money);
                }
                else
                {
                    printf("Your pin is wrong!!\nRe-enter your pin number:  ");
                    goto need_pin2;
                }

            }
            else
            {

                printf("Password doesn't matched\nRe-enter your password\n");
                goto need_password3;
            }
        }
        else if(symbol=='C')

        {
            printf("please Enter your password to log in: ");
need_password5:
            scanf("%d",&symbol1);
            if(!password)
            {
                printf("NOT FOUND\n\nFirst create your account\nWould you want to create account?(Yes or No - enter all letter in upper case)\n");
                printf("Enter your Choice:\n");
                scanf("%s",&input1);
                if(0==strcmp(input1,a1))
                {
                    goto need_account;
                }
            }
            else if (symbol1==password)
            {
                printf("How much you want to caseout?\n");
                scanf("%d",&money2);
                money=money-money2;
                printf("Pleease Confirm your pin number:  ");
need_pin:
                scanf("%d",&symbol2);
                if(symbol2==serial)
                {
                    printf("Cashout Successful.\nYOur current balance is %d",money);
                }
                else
                {
                    printf("Your pin is wrong!!\nRe-enter your pin number:  ");
                    goto need_pin;
                }

            }
            else
            {

                printf("Password doesn't matched\nRe-enter your password\n");
                goto need_password5;
            }

        }
        else if(symbol=='B')
        {
            printf("Enter your pin Number:  ");
            scanf("%d",&symbol2);
            if(symbol2==serial)
            {
                printf("Your current balance is %d",money);
            }
        }
        else if(symbol=='R')
        {
            printf("What you want to recover? (password or pin)(For password enter 'p')(For pin enter 'q':\n");
            scanf("%s",&input2);
            if(input2=='p')
            {
                printf("To recover your password please enter your pin:  ");
                scanf("%d",&symbol2);
                if(symbol2==serial)
                {
                    printf("Your password is : %d",password);
                }
                else
                {
                    printf("Your pin is wrong!!\nPlease contract with customer care.\nCustomer care Number: *****");

                }
            }

            else if(input2=='q')
            {
                printf("To recover your Pin number enter your password:  ");
                scanf("%d",&symbol2);
                if(symbol2==password)
                {
                    printf("Your pin number is : %d",serial);
                }
                else
                {
                    printf("Your password is wrong!!\nPlease contract with customer care.\nCustomer care Number: *****");

                }
            }

        }
        else if(symbol=='p')
        {
            printf("Enter your current password:  ");
need_password9:
            scanf("%d",&symbol2);
            if(symbol2==password)
            {
                printf("Enter your new password(password should be integer number):  ");
                scanf("%d",&password);
                printf("Re-enter your new password:  ");
need_password8:
                scanf("%d",&re_password);
                if(password!=re_password)
                {
                    printf("Password doesn't matched.\nRe-enter you new password:  ");
                    goto need_password8;
                }
            }
            else
            {
                printf("Password doesn't matched.\nRe-enter your password:  ");
                goto need_password9;
            }
        }
        else if(symbol=='z')
        {
            printf("please Enter your password to delete account: ");
need_password10 :
            scanf("%d",&symbol1);
            if(symbol1==password)
            {

                for(int i=0; i<20; i++)
                {
                    first_name[i] = 0;
                }


                for(int i=0; i<20; i++)
                {
                    last_name[i] = 0;
                }
                number=0;


                for(int i=0; i<20; i++)
                {
                    address[i] = 0;
                }

                date=0;
                month=0;
                year=0;

                serial=0;

                for(int i=0; i<20; i++)
                {
                    citizen[i] = 0;
                }
                 printf("Your account has been deleted Succesfully.\n");
                 printf("Do you want to Create new Account now? Enter(y/n)\n");
                 scanf("%s",&input2);
                 if(input2=='y'){
                    goto need_account;
                 }
                 else if(input2=='n'){
                    printf("Thanks for Tour\n\n\n");
                    break;
                 }


            }


            else
            {
                printf("Password doesn't matched\nRe-enter your password\n");
                goto need_password10;
            }
        }
        else if(symbol=='\n')
        {
            goto label;
        }
        else
        {
            printf("Enter the valid character!!");
        }

    }
}



void main()
{

    menu();
}

