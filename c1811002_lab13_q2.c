//ECE AKDEMÝR
//201811002
//LAB 13 QUESTION 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct program
{
    int nr_loop;
    int nr_if;
    int nr_comment;
    char fname[25];
};
int main(void)
{
    struct program a[5];
    FILE *files[5];
    char readline[256];
    char x='c';
    int min_loop=1000,c,i=0,j;
    while(x=='c')
    {
        printf("Enter File name ");
        scanf("%s",&a[i].fname);
        a[i].nr_loop = 0;
        a[i].nr_if = 0;
        a[i].nr_comment = 0 ;
        i++;
        printf("If you want to continue enter 'c'");
        scanf(" %c",&x);
    }

    for(j=0;j<=i;j++)
        files[j]=fopen(a[j].fname,"r");

     for(j=0;j<=i;j++)
     {
        while(fgets(readline,256,files[j]) != NULL)
        {
            if( strstr(readline,"for")!= NULL)
                a[j].nr_loop++;
            if( strstr(readline,"while")!= NULL)
                a[j].nr_loop++;
            if( strstr(readline,"if")!= NULL)
                a[j].nr_if++;
            if( strstr(readline,"//")!= NULL)
                a[j].nr_comment++;
            if( strstr(readline,"/*")!= NULL)
                a[j].nr_comment++;

        }
     }
    //    printf("\nNumber of loop %d = \n",a[j].nr_loop);
    //    printf("\nNumber of if %d = \n",a[j].nr_if);
    //    printf("\nNumber of comment %d = \n",a[j].nr_comment);

    for(j=0;j<=i;j++)
    {
        if(min_loop>a[j].nr_loop)
        {
           min_loop=a[j].nr_loop;
            c=j;
        }
    }

    printf("Least loop included code is :%s",a[c].fname);
    for(j=0;j<=i;j++)
        fclose(files[j]);
    return 0;
}
