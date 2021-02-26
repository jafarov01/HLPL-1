#include "std_lib_facilities.h"

class unreal_root{};

void quadratic_roots(float a, float b, float c)
{
    float discriminant = b * b - (4 * a * c);
    int x1 = 0, x2 = 0;
    if (discriminant < 0) throw unreal_root{};

    x1 = (-b - sqrt(discriminant)) / 2 * a;
    x2 = (-b + sqrt(discriminant)) / 2 * a;
    cout << "\n\tx1 = " << x1 << endl << "\tx2 = " << x2;
}

int main()
{
    int a, b, c, x;
    cout << "For ax^2 + bx + c = 0 quadratic equation,\n\t";
    cout << "Enter a: "; cin >> a;
    cout << endl << "\t";
    cout << "Enter b: "; cin >> b;
    cout << endl << "\t";
    cout << "Enter c: "; cin >> c;
    try
    {
        quadratic_roots(a, b, c);
    }
    catch (unreal_root)
    {
        cerr << "No real roots found!\n";

    }
}
