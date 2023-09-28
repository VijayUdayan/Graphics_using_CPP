#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    string str;
    setcolor(CYAN);
    line(100,100,300,100);
    int color = getpixel(100,100);
    switch (color){
        case 0:
            str = "Black";
        break;
        case 1:
            str = "Blue";
        break;
        case 2:
            str = "Green";
        break;
        case 3:
            str = "Cyan";
        break;
        case 4:
            str = "Red";
        break;
        case 5:
            str = "Magenta";
        break;
        case 6:
            str = "Brown";
        break;
        case 7:
            str = "LightGray";
        break;
        case 8:
            str = "DarkGray";
        break;
        case 9:
            str = "LightBlue";
        break;
        case 10:
            str = "LightGreen";
        break;
        case 11:
            str = "LightCyan";
        break;
        case 12:
            str = "LightRed";
        break;
        case 13:
            str = "LightMagenta";
        break;
        case 14:
            str = "Yellow";
        break;
        case 15:
            str = "White";
        break;
    }
    cout<<str;
    //outtextxy(300,150,);
    getch();
    closegraph();
}
