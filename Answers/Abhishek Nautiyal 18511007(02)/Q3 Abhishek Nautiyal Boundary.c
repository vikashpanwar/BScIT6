#include<graphics.h>

#include<stdio.h>

void boundary_fill(int x, int y, int fill_color, int bound_color)

{

if(getpixel(x,y) != fill_color && getpixel(x,y) != bound_color)

{

putpixel(x,y,fill_color);

delay(1);

boundary_fill(x+1,y,fill_color,bound_color);
boundary_fill(x,y-1,fill_color,bound_color);

boundary_fill(x-1,y,fill_color,bound_color);
boundary_fill(x,y+1,fill_color,bound_color);
boundary_fill(x-1,y-1,fill_color,bound_color);
boundary_fill(x+1,y-1,fill_color,bound_color);
boundary_fill(x-1,y+1,fill_color,bound_color);
boundary_fill(x+1,y+1,fill_color,bound_color);

}

}

int main( )

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"");

line(100,100,250,100);

line(250,100,250,250);

line(250,250,400,250);

line(400,250,400,400);


line(248,400,400,400);

line(248,250,248,400);

line(100,100,100,250);

line(100,250,248,250);

boundary_fill(150,150,RED,WHITE);

getch( );

closegraph( );

}