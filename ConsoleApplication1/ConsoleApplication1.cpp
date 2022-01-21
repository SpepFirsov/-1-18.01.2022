#include <iostream>
using namespace std;
double Eps;
double f(double x)
{
    return 7 * pow(sin(x), 2);
}
double minF(double s, double e)
{
    double min = (s + e) / 2;
    if (e - s < Eps)
    return min;

    double x1 = minF(s, min), x2 = minF(min, e);
    return f(x1) < f(x2) ? x1 : x2;
}
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Задайте точность(Eps):";
    cin >> Eps;
    cout << minF(2, 6);
}