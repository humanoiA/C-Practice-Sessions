#include<graphics.h>
#include<conio.h>
int main() {
    int gd = DETECT, gm;
    /* initialization of graphic mode */
    initgraph(&gd, &gm, "C:\TURBOC3\BGI"); 
    line(100,100,200, 200);
    getch();
    closegraph();
    return 0;
}
