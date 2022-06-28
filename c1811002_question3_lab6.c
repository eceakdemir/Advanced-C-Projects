//201811002
//ECE AKDEMiR
//QUESTÝON 3

#include<stdio.h>
int f(int a[][9],int m, int n);
int main(void)
{
 int a[9][9];
 int i,j,flag;
 for(i=0;i<9;i++)
 {
     for(j=0;j<9;j++)
     {
         printf("Enter n(n<10):");
         scanf("%d",&a[i][j]);
     }
 }
 flag=f(a,9,9);
 if(flag==0)
    printf("This is NOT a suduko\n");
 else if (flag==1)
    printf("This IS a suduko\n");
 for(i=0;i<9;i++)
 {
     for(j=0;j<9;j++)
         printf("%d",a[i][j]);
     printf("\n");

 }
 return 0;
}

int f(int a[][9],int m, int n)
{
    int flag=1,i=0,j=0,keep,x=0;
    for(i=0;i<m;i++)
    {
        keep=a[i][i];
        for(j=0;j<n;j++)
        {
            if(a[i][j]==keep && i!=j)
                flag=0;
        }
    }
    for(j=0;j<m;j++)
    {
        keep=a[j][j];
        for(i=0;i<n;i++)
        {
            if(a[i][i]==keep && i!=j)
                flag=0;
        }
    }
    for(i=0;i<m;i++)
    {
        keep=a[i][i];
        for(j=x;j<n;j++)
        {
            if(a[i][j]==keep && i!=j)
                flag=0;
            if(j==2)
            {
               x=0;
               i++;
            }
            else if(j==5)
            {
               x=3;
               i++;
            }
            else if(j==8)
            {
               x=6;
               i++;
            }
        }
    }
    return flag;
}
