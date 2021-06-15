#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
int graphdriver=0,graphmode,i;
float x,y,x1,y1,x2,y2,dx,dy,e;
initgraph(&graphdriver,&graphmode,NULL);
cleardevice();
cout<<"Enter the value of x1 ";
cin>>x1;
cout<<"Enter the value of Y1 ";
cin>>y1;
cout<<"Enter the value of x2 ";
cin>>x2;
cout<<"Enter the value of Y2 ";
cin>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
while(i<=dx)
{
putpixel(x,y,WHITE);
delay(60);
if(e>=0)
{
y=y+1;
e=e-2*dx;
}
else
{
x=x+1;
e=e+2*dy;
i=i+1;
}
}
getch();
closegraph();
return 0;
}#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
int graphdriver=0,graphmode,i;
float x,y,x1,y1,x2,y2,dx,dy,e;
initgraph(&graphdriver,&graphmode,NULL);
cleardevice();
cout<<"Enter the value of x1 ";
cin>>x1;
cout<<"Enter the value of Y1 ";
cin>>y1;
cout<<"Enter the value of x2 ";
cin>>x2;
cout<<"Enter the value of Y2 ";
cin>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
while(i<=dx)
{
putpixel(x,y,WHITE);
delay(60);
if(e>=0)
{
y=y+1;
e=e-2*dx;
}
else
{
x=x+1;
e=e+2*dy;
i=i+1;
}
}
getch();
closegraph();
return 0;
}#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
int graphdriver=0,graphmode,i;
float x,y,x1,y1,x2,y2,dx,dy,e;
initgraph(&graphdriver,&graphmode,NULL);
cleardevice();
cout<<"Enter the value of x1 ";
cin>>x1;
cout<<"Enter the value of Y1 ";
cin>>y1;
cout<<"Enter the value of x2 ";
cin>>x2;
cout<<"Enter the value of Y2 ";
cin>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
x=x1;
y=y1;
e=2*dy-dx;
i=1;
while(i<=dx)
{
putpixel(x,y,WHITE);
delay(60);
if(e>=0)
{
y=y+1;
e=e-2*dx;
}
else
{
x=x+1;
e=e+2*dy;
i=i+1;
}
}
getch();
closegraph();
return 0;
}
