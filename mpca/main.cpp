#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define ROUND(a) ((int)(a+0.5))
void lineDDA(int xa, int ya, int xb, int yb);
void main()
{
int xa, xb, ya, yb;
int gd=DETECT, gm, gerr;
clrscr();
printf("Enter the two end points [(xa, ya), (xb, yb)]:");
scanf("%d%d%d%d",&xa, &ya, &xb, &yb);
initgraph(&gd, &gm,"C:\\tc\\bgi);
gerr=graphresult();
if(gerr!=grOk)
{
printf("Error: %s",grapherrormsg(gerr));
getch();
return;
}
lineDDA(xa, ya, xb, yb);
getch();
closegraph();
}
void lineDDA(int xa, int ya, int xb, int yb);
{
int dx=xb-xa, dy=yb-ya, steps, k;
float xIncrement, yIncrement, x=xa, y=ya;
if(abs(dx)>abs(dy)
steps=abs(dx);
else
steps=abs(dy);
xIncrement=dx/(float)steps;
yIncrement=dy/(float)steps;
putpixel(ROUND(x), ROUND(y), RED);
for(k=0;k<steps;k++)
{
x+=xIncrement;
y+=yIncrement;
putpixel(ROUND(x), ROUND(y), RED);
}
}
