#include<stdio.h>
#include<math.h>
#include<graphics.h>
void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
void Rotate(int x1,int y1,int x2,int y2,int x3,int y3)
 {
int x,y,a1,b1,a2,b2,a3,b3,p=x2,q=y2,gd=DETECT,gm;
 float Angle;
 	printf("Enter the angle for rotation: ");
 	scanf("%f",&Angle);
 	initgraph(&gd,&gm,NULL);
 	outtext(" - - - Before Rotation - - - ");
 	triangle(x1,y1,x2,y2,x3,y3);
 	delay(1000);
 	cleardevice();
 	Angle=(Angle*3.14)/180;
 	a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
 	b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
 	a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
 	a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
 	outtext(" - - - After Rotation - - - ");
 	triangle(a1,b1,a2,b2,a3,b3);
 	delay(1000);
}
void main( ) 
{
int x1,y1,x2,y2,x3,y3;
printf("Enter the 1st point for the triangle:\n");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd point for the triangle:\n");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd point for the triangle:\n");
scanf("%d%d",&x3,&y3);
Rotate(x1,y1,x2,y2,x3,y3);
closegraph(); 
}