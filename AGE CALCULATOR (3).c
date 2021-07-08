/* Student Name - OMKAR KUMAR SONKAR
Department - Mechanical Engineering
Year - 1st Year
College - Government College of Engineering & Textile Technology, Berhampore

#MAKAUT
#MAR
#codingsolution
 Write a C Program to ChecK Your Age.
 SOLUTION --
 INPUT--
*/
   
#include<stdio.h>
#include<conio.h>

int main()
{   int p,d,m,y,d1,m1,y1,D2,M2,Y2;
    printf("Enter your DoB :\n");
    printf("Day- ");
    scanf("%d",&d);
    if(1>d||d>32)
    {
        printf("Please enter the number between 0 to 32");
    }
    else
    {   printf("Month- ");
        scanf("%d",&m);
    }
    if(1>m||m>13)
    {
        printf("Please enter the number between 0 to 13");

        return 0;
    }
    else

    {   printf("Year- ");
        scanf("%d",&y);
    }
    if(1>y||y>2021)
    {
        printf("Please enter the number between 0 to 2022");
        return 0;
    }

    printf("Enter current Date \n");
    printf("Day- ");
    scanf("%d",&d1);
    if(1>d1||d1>32)
    {
        printf("Please enter the number between 0 to 32");
        return 0;
    }
    printf("Month- ");
    scanf("%d",&m1);
    if(1>m1||m1>13)
    {
        printf("Please enter the number between 0 to 13");

        return 0;
    }
    printf("Year- ");
    scanf("%d",&y1);
    if(y>y1)
    {
        printf(" Current Year must greater than your Birth Year");

        return 0;
    }
    if ((m%2==1)||(m==1) && (m<8))
    {
        p=31;
    }


    else if((m==8)||(m==10)||(m==12))
    {
        p=31;
    }
    else if((m==9)||(m==11))
    {
        p==30;
    }
    else if((m%2==0) &&(m!=2)&&(m<10))
    {
        p=30;
    }
    else if(m==2)
    {   if(y%4==0)
        {
            p=29;
        }
        else
        {
            p=28;
        }

    }


    Y2=(y1-(y+1));
    M2=((m1-1)+(12-m));
    D2=((p-d)+(d1));

    if((D2>31)&& (m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))

    {
        D2=(D2-31);
        M2=(M2+1);
    }
    else if(D2>30&&(m==4||m==6||m==9||m==11))
    {
        D2=(D2-30);
        M2=(M2+1);
    }
    else if((D2>29)&&(m==2))

    {
        D2=(D2-29);
        M2=(M2+1);
    }
    else if((D2>28)&&(m==2))
    {
        D2=(D2-28);
        M2=(M2+1);
    }


    if(M2>=12)
    {
        M2=(M2-12);
        Y2=(Y2+1);
    }

    printf("Your age is: \n %d Years,%d Months, %d Days",Y2,M2,D2);
}

/*--OUTPUT--
Enter your DoB :
Day- 06
Month- 10
Year- 2000
Enter current Date
Day- 8
Month- 7
Year- 2021

Your age is:
20 Years,9 Months, 2 Days
*/



