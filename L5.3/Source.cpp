#include <iostream>
#include <cmath>
using namespace std;

double h(const double x);  

int main()
{
    double rp, rk, z;
    int n;
    cout << "rp = "; cin >> rp;
    cout << "rk = "; cin >> rk;
    cout << "n = "; cin >> n;

    double dg = (rk - rp) / n; 
    double r = rp;

    
    while (r <= rk)
    {
        z = h(r + 1) + pow(h(r * r + 1), 2) + 1;  
        cout<< r << "  " << z << endl;
        r += dg;
    }

    return 0;
}

double a = 1;
double S = 0;
double h(const double x)
{
    if (fabs(x) >= 1) 
    {
        return (cos(x) + 1)/exp(x); 
    }
    else if (fabs(x) < 1 && x != 0)  
    {
        double S = 0;  
        for (int n = 0; n <= 6; ++n)
        {
            double R = pow(x, 4 * n + 2) /(2 * n + 2);  
            a *= R;
            S += a; 
        }
        return 1. / pow(sin(x), 2) * S;  
    }
    else
    {
        return 0.0; 
    }
}
