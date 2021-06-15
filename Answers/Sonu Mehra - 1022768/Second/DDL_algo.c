#include<stdio.h>  
#include<graphics.h>  
void drawline(int x0, int y0, int x1, int y1)  
{  
    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,7);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,7);  
            p=p+2*dy;}  
            x=x+1;  
        }  
}  
int main()  
{  
    int gdriver=DETECT, gmode, error, x, y, x1, y1;  
    initgraph(&gdriver, &gmode);  
    printf("Enter the value of x1 : ");  
    scanf("%d", &x);  
    printf("Enter the value of y1 : "); 
    scanf("%d", &y);  
    printf("Enter the value of x2 : "); 
    scanf("%d", &x1);  
    printf("Enter the value of y2 : "); 
    scanf("%d", &y);  
    drawline(x, y, x1, y1);  
    return 0;  
}  