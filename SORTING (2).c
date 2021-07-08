/* Student Name - OMKAR KUMAR SONKAR
Department - Mechanical Engineering
Year - 1st Year
College - Government College of Engineering & Textile Technology, Berhampore

#MAKAUT
#MAR
#codingsolution
 Write a C Program to Sorting.
 SOLUTION --
 INPUT--
*/
#include<stdio.h>
#include<conio.h>
int main()
{   int i,n,c,p,t,j,q;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n];
    printf("Please enter the terms \n");

    for(c=0; c<n; c++)
    {

        p=c+1;
        if(p==1)
        {
            printf("%dst term=",p);
        }
        else if (p==2)
        {
            printf("%dnd term=",p);
        }
        else if(p==3)
        {
            printf("%drd term=",p);
        }
        else
        {
            printf("%dth term=",p);
        }
        scanf("%d",&a[c]);
    }
    {   printf("\n");
        printf("Enter'1'for sort the given number to ascending order or enter'2'for desending order:\n\n");
        scanf("%d",&t);
        clrscr();
        if(t==1)
        {
            printf("You choose to sort above term to Ascending Order\n\n");
        }
        else if(t==2)
        {
            printf("You choose to sort above term to Descending Order\n\n");
        }
        else
        {
            printf("Please enter 1 or 2 Only");
        }
    }
    switch(t)
 {
  case 1:
    {
        for(i=1; i<n; i++)
        {   j=i;
            while(j>0&&a[j-1]>a[j])
            {
                q=a[j];
                a[j]=a[j-1];
                a[j-1]=q;
                j--;
            }
        }

        for(i=0; i<n; i++)
        {
            printf("%d\n",a[i]);
        }
        break;
     }
      
 case 2:

      {
        for(i=1; i<n; i++)
        {   j=i;
            while(j>0&&a[j-1]<a[j])
            {
                q=a[j];
                a[j]=a[j-1];
                a[j-1]=q;
                j--;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    break;
    
   }
    
}

/*--OUTPUT--

Enter the size : 8

Please enter the terms
1st term=23
2nd term=56
3rd term=45
4th term=78
5th term=19
6th term=35
7th term=45
8th term=32

Enter'1'for sort the given number to ascending order or enter'2'for desending order:

1

You choose to sort above term to Ascending Order

19
23
32
35
45
45
56                         78
*/





