#include <iostream>
#include "Recursividad.h"

using namespace std;

int main(void)
{
    Recursividad *obj = new Recursividad();
    int num;
    cout << "Digite numero: ";
    cin >> num;
    cout << "El factorial de " << num << " es: " << obj->factorial(num) << endl;
}
