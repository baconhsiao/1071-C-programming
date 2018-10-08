#include <stdio.h>

int isLeap(int year)
{
    if ((year%4==0 & !(year%100==0)) || year%400==0)
        return 1;
    else
        return 0;
}

int timeconvert(int hh,int mm,int ss)
{
    int sec;
    sec = hh*3600 + mm*60 + ss;

}
int main()
{
    int choice;
    int year;
    int hh,mm,ss;
    int sec;

    while(1)
    {
        printf("Main Menu \n");
        printf("1. Year \n");
        printf("2. TimeConvert \n");
        printf("3. Exit \n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)
        break;
        switch(choice)
        {
        case 1:
            printf ("Enter year : ");
            scanf ("%d",&year);
            if(isLeap(year))
            {
                printf ("Year %d is a leap year \n",year);
            }
            else
            {
                printf("Year %d is not a leap year \n",year);
            }
            break;

        case 2:
            printf ("Enter hh:mm:ss : ");
            scanf ("%02d:%02d:%02d",&hh,&mm,&ss);
            sec=timeconvert (hh,mm,ss);
            printf ("%d:%d:%d = %d sec\n",hh,mm,ss,sec);
            break;

            return 0;
        }
    }
}
