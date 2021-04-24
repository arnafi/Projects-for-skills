#include<stdio.h>
#include<conio.h>


int main()
{
    int salary[100],x,N;
    char r,s,t,q,symbol;
    printf("Enter r to take salary of all employees\nEnter s to search a salary amount.\nEnter t, to display salary of all employees in reverse index order.\nEnter q to quit\n\n\n");


    int i=0;
    do
    {
        printf("Enter your choice:\n");
        label :
        scanf("%c",&symbol);
        if(symbol=='q')
        {
            break;
        }
        else if(symbol=='r')
        {
            printf("How many employees are here:\n");
            scanf("%d",&N);
            printf("Enter your salary\n");
            for(int i=0; i<N; i++)
            {
                scanf("%d",&salary[i]);
            }
        }
        else if(symbol=='t')
        {
            for(int i=N-1; i>=0; i--)
            {
                printf("index [%d] %d\n",i,salary[i]);
            }
        }
        else if(symbol=='s')
        {
            if(!salary[0])
            {
                printf("Please Enter Salary First:\n");
            }
            else
            {
                printf("search your salary:\n");
                scanf("%d",&x);
                int check;
                for(int i=0; i<N; i++)
                {
                    if(x==salary[i])
                    {
                        printf("your %d employee salary is= %d\n",i,x);
                        check = 1;
                        break;
                    }
                    else
                    {
                        check = 0;
                    }
                }
                if(check==0)
                {
                    printf("Not Found\n");
                }

            }
        }
        else if(symbol == '\n')
        {
            goto label;
        }
        else
        {

            printf("Enter The valid character\n");

        }

    }while(i<1000);

}
