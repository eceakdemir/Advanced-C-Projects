//ECE AKDEMÝR
//201811002
//LAB 12 QUESTION 1

#include<stdio.h>
int main(void)
{
	FILE *fp;
	int s[30];
	int del;
	int i;
	printf("Input Delimeter:");
	scanf("%c",&del);
	fp=fopen("D:\2.Dönem_Ödev\CENG_114\input.txt","r");
	while (!feof(fp))
	{
		for(i=0;i<30;i++)
      {
		s[i]=fgetc(fp);
			if(s[i]==32)
				s[i]=del;
		fprintf(fp,"%c",s[i]);
      }
	}
	fclose(fp);
	return 0;
}
