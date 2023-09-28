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
            outtextxy(300,150,(char*)"Black");
        break;
        case 1:
            str = "Blue";
            outtextxy(300,150,(char*)"Blue");
        break;
        case 2:
            str = "Green";
            outtextxy(300,150,(char*)"Green");
        break;
        case 3:
            str = "Cyan";
            outtextxy(300,150,(char*)"Cyan");
        break;
        case 4:
            str = "Red";
            outtextxy(300,150,(char*)"Red");
        break;
        case 5:
            str = "Magenta";
            outtextxy(300,150,(char*)"Magenta");
        break;
        case 6:
            str = "Brown";
            outtextxy(300,150,(char*)"Brown");
        break;
        case 7:
            str = "LightGrey";
            outtextxy(300,150,(char*)"LightGrey");
        break;
        case 8:
            str = "DarkGrey";
            outtextxy(300,150,(char*)"DarkGrey");
        break;
        case 9:
            str = "LightBlue";
            outtextxy(300,150,(char*)"LightBlue");
        break;
        case 10:
            str = "LightGreen";
            outtextxy(300,150,(char*)"LightGreen");
        break;
        case 11:
            str = "LightCyan";
            outtextxy(300,150,(char*)"LightCyan");
        break;
        case 12:
            str = "LightRed";
            outtextxy(300,150,(char*)"LightRed");
        break;
        case 13:
            str = "LightMagenta";
            outtextxy(300,150,(char*)"LightMagenta");
        break;
        case 14:
            str = "Yellow";
            outtextxy(300,150,(char*)"Yellow");
        break;
        case 15:
            str = "White";
            outtextxy(300,150,(char*)"White");
        break;
    }
    cout<<str;
    getch();
    closegraph();
}
