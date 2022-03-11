#include "vec.h"
class Boundary
{
public:
    vec a, b;
    short col = blueF;
    Boundary(float x1, float y1, float x2, float y2, short color = blueF)
    {
        a = vec(x1, y1);
        b = vec(x2, y2);
        col = color;
    }

    void show(Engine2d game)
    {
        game.drawLine(a.x, a.y, b.x, b.y, blueF, '*');
    }
};