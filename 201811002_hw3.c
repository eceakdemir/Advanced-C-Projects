//201811002
//ZEHRA ECE AKDEMÝR
// HOMEWORK 3

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct portfolio
{
    char prtf_name[30];
    char prtf_type;
    char prtf_caregory;
    double price;
    int visitor;
};

struct consultant
{
    int prtf_num;
    char cnslt_name[30];
// structure within structure
    struct portfolio prtf[10];
};


int main (void)
{
    char s1[50];
    struct consultant a[10];
    int i=0,j=0,choose=0,count=0,y=0;
    FILE *fp1,*fp2;
    fp1=fopen("ABC.txt","r");
    fp2=fopen("output.txt","w");

    if(fp1==NULL)
        printf("can not open\n");


    while (choose!=8)
    {
        printf("Choose 1,2,3,4,5, 6, 7, 8:\n1. Read Portfolio Data\n2. Find portfolio\n3. Insert portfolio\n4. Print List of Consultant’s portfolio\n5. Print List of specific portfolio category\n6. Sort portfolios based on number of visitors\n7. Find most expensive portfolio of a consultant\n8. Quit\n");
        scanf("%d",&choose);

        if(choose==1)
        {
            printf("test\n");
            while(fgets(s1,50,fp1) != NULL)
            {
               printf("icerde\n");
                while(s1[i]!='/')
                {
                    a[j].cnslt_name[i]=s1[i];
                    i++;
                    count++;
                }
                printf("*");
                i++;
                count++;
                y=count;

                while(s1[i]!='/')
                {
                    a[j].prtf[j].prtf_type=s1[i];
                    i++;
                    count++;
                }
                i++;
                count++;
                y=count;

                while(s1[i]!='/')
                {
                    a[j].prtf[j].prtf_type=s1[i];
                    i++;
                    count++;
                }
                i++;
                count++;
                y=count;

                while(s1[i]!='/')
                {
                    a[j].prtf[j].prtf_caregory=s1[i];
                    i++;
                    count++;
                }
                i++;
                count++;
                y=count;

                while(s1[i]!='/')
                {
                    a[j].prtf[j].price=s1[i];
                    i++;
                    count++;
                    printf("price is = %lf",a[j].prtf[j].price);
                }
                i++;
                count++;
                y=count;

                while(s1[i]!='/')
                {
                    a[j].prtf[j].visitor=s1[i];
                    i++;
                }

                j++;

            }

        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
