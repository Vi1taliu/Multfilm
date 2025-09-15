#include "TXLib.h"

void drawHangar()
{
    txSetColor (RGB(61, 54, 54));
    txSetFillColor (RGB(61, 54, 54));
    txRectangle (0, 0, 800, 600);
}

int main()
    {
    txCreateWindow (800, 600);

    txTextCursor (false);
    return 0;
    }

