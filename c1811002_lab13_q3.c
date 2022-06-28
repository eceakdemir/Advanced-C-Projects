//ECE AKDEMÝR
//201811002
//LAB 13 QUESTION 3

#include<stdio.h>
#include<string.h>
struct word
{
  char w[30];
  int loc;
};
void little (struct word b[],char *tiny[],int *place1,int c1);
int main(void)
{
    struct word a[20];
    int i=0,k,j,c=0,len,count=1,z,place;
    char s1[200],y[30];
    char tiny[30];
    printf("Enter sentence: ");
    gets(s1);
    len=strlen(s1);
    for(z=0;z<len;z++)
    {
        if(s1[z]==' ')
            count++;
    }

    a[c].loc=0;

    for (c=0;c<count;c++)
    {
        for(k=0;s1[i]!=' ';k++)
        {
        y[k]=s1[i];
        i++;
        }
        a[c+1].loc=i+1;
        y[k]='\0';
        strcpy(a[c].w,y);
        printf("word: %s\n",a[c].w);

        for(j=0;j<30;j++)
            y[j]='\0';
        i++;
    }

 little(&a,&tiny,&place,c);

 return 0;
}

void little(struct word b[],char *tiny[],int *place1,int c1)
{
 int keep,i,s;
  keep=1000;
  for(i=0;i<c1;i++)
  {
      if(keep>strlen(b[i].w))
      {
           keep=strlen(b[i].w);
           *place1=b[i].loc;
           s=i;
      }
  }
 *tiny=b[s].w;
 printf("smallest= %s\n",*tiny);
 printf("location of small= %d\n",*place1);

}


