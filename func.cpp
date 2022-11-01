#include "func.h"
#include "math.h"
int fact(int n)
{
    
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    // retern 0;
}
int _ADD(int a, int b)
{
    return a + b;
}

int _MINUS(int a, int b)
{
    return a - b;

}
int _MULTI(int a, int b)
{
    return a * b;
}
float _DIVIS(int a, int b)
{
    float d = a;
    return d / b;
}
int _ORDE(int a, int b)
{
   b = abs(b);
    if (b > 1)
    {
        return a*_ORDE(a, b - 1);
    }
    else
    {
        return a;
    }
}
