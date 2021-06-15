/*
Name:- Shamsher Singh Bhandari
Roll No :-49(1022759)
bsc it 6th sem

// program to implement Boundary-fill algorithm.

*/


#include<graphics.h>
#include<stdio.h>
void boundary_fill(int x, int y, int fill_color, int bound_color)
{
if(getpixel(x,y) != fill_color && getpixel(x,y) != bound_color)
{
putpixel(x,y,fill_color);
boundary_fill(x+1,y,fill_color,bound_color);
boundary_fill(x,y-1,fill_color,bound_color);
boundary_fill(x-1,y,fill_color,bound_color);
boundary_fill(x,y+1,fill_color,bound_color);
}
}


int main( )
{
int gd=DETECT,gm;
int x,y,r;
printf("Enter x and y position of circle :");
scanf("%d %d",&x,&y);
printf("Enter radius of circle :");
scanf("%d",&r);
initgraph(&gd,&gm,"");
circle(x,y,r);
boundary_fill(x,y,RED,WHITE);
delay(200);
getch( );
closegraph( );
}

