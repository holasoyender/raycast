#pragma once
class vec
{
public:
    float x;
    float y;
    vec()
    {
        x = 0;
        y = 0;
    }
    vec(float a, float b)
    {
        x = a;
        y = b;
    }

    friend vec operator+(vec a, vec b)
    {
        return {a.x + b.x, a.y + b.y};
    }
    friend vec operator-(vec a, vec b)
    {
        return {a.x - b.x, a.y - b.y};
    }
    friend vec operator*(vec a, vec b)
    {
        return {a.x * b.x, a.y * b.y};
    }
    friend vec operator/(vec a, vec b)
    {
        return {a.x / b.x, a.y / b.y};
    }
    vec normalize()
    {
        float mag = x * x + y * y;
        if (mag != 0)
        {
            x = x / mag;
            y = y / mag;
        }
        return {x, y};
    }
    vec fromAngle(float angle)
    {
        return {cosf(angle), sinf(angle)};
    }
};
