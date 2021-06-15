/*
Name :-Shamsher Singh Bhandari
Rollno:49 (1022759)

//program to rotate an object by 90 degree in clockwise direction
*/
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
int x1,x2,y1,y2,xn1,yn1,xn2,yn2,angle;
double s,c;
int gd=DETECT,gm;
printf("Enter the coordinates of first point(x1,y1) :");
scanf("%d %d",&x1,&y1);
printf("Enter the coordinates of second point(x2,y2) :");
scanf("%d %d",&x2,&y2);
printf("\n Enter rotation angle :");
scanf("%d",&angle);
initgraph(&gd,&gm," ");
cleardevice();


c=cos(angle*(3.14/180));
s=sin(angle*(3.14/180));
xn1=abs((x1*c)-(y1*s));
yn1=abs((x1*s)+(y1*c));
xn2=abs((x2*c)-(y2*s));
yn2=abs((x2*s)+(y2*c));

setcolor(RED);
outtextxy(400,100,"Original line in red color");
line(x1,y1,x2,y2);
setcolor(BLUE);
outtextxy(400,120,"Rotated line in blue color");
line(xn1,yn1,xn2,yn2);
getch();
closegraph();
return 0 ;
}
