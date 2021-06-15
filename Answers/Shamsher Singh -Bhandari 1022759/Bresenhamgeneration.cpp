/*
Name:- Shamsher Singh Bhandari
Roll No :-49(1022759)
bsc it 6th sem

// program to draw a line using Bresenham’s line generation algorithm.

*/

#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void bresenhamline(int,int,	int  ,int  );

int main()
{
int x1,x2,y1,y2,xn1,yn1,xn2,yn2,angle;
double s,c;
int gd=DETECT,gm;

initgraph(&gd,&gm," ");
cleardevice();




bresenhamline(100,150,200,180);


getch();
closegraph();
return 0;
}

//.......................................................//

void bresenhamline(int x1 ,int y1,	int x2 ,int y2 )
{

int dx=x2-x1;
int dy=y2-y1;
 
int x=x1;
int y=y1;
int p=2*dy-dx;
	
	


printf("x \t y \t p \n");
putpixel(x, y, 9);


	while(x<x2)
	{
		x=x+1;
		putpixel(x, y, 2);
		if(p<0) { y=y;   p=p+2*dy; }
		else{ y=y+1; p=p+2*(dy-dx); }
		printf("%d \t%d \t%d\n",x,y,p);
	}
putpixel(x2, y2, 9);
	

}
