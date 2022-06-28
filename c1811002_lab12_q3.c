//ECE AKDEMÝR
//201811002
//LAB 12 QUESTION 3

#include<stdio.h>
#include<math.h>
struct coor
{
	double x;
	double y;
};
int main(void)
{
struct coor p1,p2;
double dis;
printf("Input coordinates of p1:");
scanf("%lf%lf",&p1.x,&p1.y);
printf("Input coordinates of p2:");
scanf("%lf%lf",&p2.x,&p2.y);
dis=(p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);
dis=sqrt(dis);
printf("Distance between p1 and p2 = %lf\n",dis);
return 0;
}
