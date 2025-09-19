#include "TXLib.h"

void drawHangar()
{
    txSetColor (RGB(100, 100, 100));
    txSetFillColor (RGB(100, 100, 100));
    txRectangle (0, 0, 800, 600);

    txSetColor (RGB(45, 191, 196));
    txSetFillColor (RGB(45, 191, 196));
    txRectangle (97, 80, 698, 171);

    txSetColor (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txRectangle (34, 0, 49, 600);

    txSetColor (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txRectangle (766, 0, 751, 600);
}

void drawTank(int x)
{
    txSetColor (RGB(13, 125, 13));
    txSetFillColor (RGB(13, 125, 13));
    POINT tank[4] = {{197, 360}, {603, 360}, {659, 455}, {126, 455}};
    txPolygon (tank, 4);

    txSetColor (RGB(13, 125, 13));
    txSetFillColor (RGB(13, 125, 13));
    POINT tank2[4] = {{367, 234}, {554, 234}, {554, 348}, {367, 348}};
    txPolygon (tank2, 4);

}

int main()
{
    txCreateWindow (800, 600);

    //int xTank = 100;

    //while (xTank<347)
    {
        txBegin();
        drawHangar();
        drawTank();
        txEnd();
        //xTank += 1;
    }

txTextCursor (false);
return 0;
}

