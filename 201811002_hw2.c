//ECE AKDEMÝR
//201811002
//HOMEWORK 2

#include<stdio.h>
void inputSets(int arr[][10],int n);
void swapSets(int arr[][10],int n,int x, int y);
void findIntersection(int arr[][10],int hold[],int n,int x, int y);
void shiftSets(int arr[][10],int n);
void findUnion(int arr[][10],int n,int x, int y, int unit[],int *count);
int main(void)
{
 int arr[10][10];
 int hold[10],unit[20];
 int i,keep,j,x=80,y=80,c=0;

 for(i=0;i<20;i++)
    unit[i] = '\0';

 while(i!=5)
 {
     printf("\n0. Input sets\n1. Swap sets\n2. Find intersection\n3. Shift sets\n4. Find Union\n5. Quit\nEnter your choice (0,1,2,3,4,5):");
     scanf("%d",&i);
     if(i==0)
        inputSets(arr,10);
     else if(i==1)
     {
         x=80;
         y=80;
         while(x>11 || y>11 || x<0 || y<0)
         {
             printf("Input set columns to swap:");
             scanf("%d",&x);
             scanf("%d",&y);
         }
         swapSets(arr,10,x,y);
         printf("\nSet %d and set %d swapped\n\n",x,y);
         for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                    printf("%d",arr[i][j]);
                printf("\n");
            }
     }
     else if(i==2)
     {
         x=80;
         y=80;
         while(x>11 || y>11 || x<0 || y<0)
         {
             printf("Input set columns to compare:");
             scanf("%d",&x);
             scanf("%d",&y);
         }
         findIntersection(arr,hold,10,x,y);
         printf("\nIntersection array:");
         for(i=0;i<10;i++)
         {
            if(hold[i]=='\0')
                keep=1;
         }
         if(keep==1)
            printf("There is no intersection.");
         else
             {
                 for(j=0;j<10;j++)
                 printf("%d",hold[j]);
             }
     }
     else if(i==3)
     {
       shiftSets(arr,10);
       for(i=0;i<10;i++)
            {
                for(j=0;j<10;j++)
                    printf("%d",arr[i][j]);
                printf("\n");
            }
     }
     else if(i==4)
     {
         x=80;
         y=80;
         while(x>11 || y>11 || x<0 || y<0)
         {
             printf("Input set columns to unite:");
             scanf("%d",&x);
             scanf("%d",&y);
         }
         findUnion(arr,10,x,y,unit,&c);
         printf("\nUnit of two sets:");
         for(i=0;i<c;i++)
            printf("%d ",unit[i]);
     }
     else if(i==5)
        printf("BYE");
 }
 return 0;
}
void inputSets(int arr[][10],int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
        printf("\nEnter 10 integers for set %d:",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void swapSets(int arr[][10],int n,int x, int y)
{
 int sw[10];
 int j,i;
 for(j=0;j<n;j++)
        {
            sw[j]=arr[j][y-1];
        }
 for(j=0;j<n;j++)
        {
            arr[j][y-1]=arr[j][x-1];
        }
 for(j=0;j<n;j++)
        {
            arr[j][x-1]=sw[j];
        }
}
void findIntersection(int arr[][10],int hold[],int n,int x, int y)
{
 int i,j;
 for(i=0;i<n;i++)
 {
     if(arr[i][x-1]==arr[i][y-1])
        hold[i]=arr[i][x-1];
 }
}
void shiftSets(int arr[][10],int n)
{
 int hold[10];
 int x,i,j,s,h;
     printf("Input x to shift columns:");
     scanf("%d",&x);
     for(i=0;i<x;i++)
    {
        for(s=0;s<n;s++)
        {
            hold[s]=arr[s][9];
        }
        for(j=9;j>=0;j--)
        {
            for(h=0;h<n;h++)
            {
               arr[h][j]=arr[h][j-1];
            }
        }
        for(s=0;s<n;s++)
        {
            arr[s][0]=hold[s];
        }

    }
}
void findUnion(int arr[][10],int n,int x, int y, int unit[], int *count)
{
    //couldn't figure out my error
    int i,j=0,miau;
    unit[0]=arr[x][0];
    miau =1;

    for(i=1;i<n;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[x][i]!= unit[j] && unit[j]!='\0')
                j++;
            else if(arr[x][i]!= unit[j]&& unit[j]=='\0')
            {
                unit[j]=arr[x][i];
                miau++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<20;j++)
        {
            if(arr[y][i]!= unit[j] && unit[j]!='\0')
                j++;
            else if(arr[y][i]!= unit[j] && unit[j]=='\0')
            {
                unit[j]=arr[y][i];
                miau++;
            }
        }
    }
    *count=miau;
}
