#include "Recursividad.h"

Recursividad::Recursividad()
{
    //ctor
}

Recursividad::~Recursividad()
{
    //dtor
}

int Recursividad::factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
