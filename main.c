#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int x,y,z,x1,y1,z1,x2,y2,z2;
double a,l,r,d;
printf("enter the coordinates of x,y,z: ");
scanf("%d%d%d",&x,&y,&z);
printf("enter the coordinates of x1,y1,z1: ");
scanf("%d%d%d",&x1,&y1,&z1);
printf("enter the coordinates of x2,y2,z2: ");
scanf("%d%d%d",&x2,&y2,&z2);
r=sqrt(pow((x-x1),2)+pow((y-y1),2)+pow((z-z1),2));
d=sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
a=2*sin(d/(2*r));
l=(r*a);
printf("smallest arc length is = %f",l);
return 0;
}
