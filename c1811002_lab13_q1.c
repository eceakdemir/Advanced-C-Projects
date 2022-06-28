//ECE AKDEMÝR
//201811002
//LAB 13 QUESTION 2
#include<stdio.h>
#include<stdlib.h>
struct program
{
    int loop;
    int iff;
    int comment;
    char fname[25];
};
int main(void)
{
    struct program a[5];
    FILE files[5];
    char x='c';
    int i=0,j;
    while(x=='c')
    {
        printf("Enter File name ");
        scanf("%s",&a[i].fname);
        i++;
        printf("If you want to continue enter 'c'");
        scanf(" %c",&x);
    }

    for(j=0;j<=i;j++)
        files[j]=fopen(a[j].fname,"r");





    return 0;
}
