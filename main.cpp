#include <iostream>
#include <windows.h>
#include <math.h>
#include <stdio.h>

using namespace std;
int main()
{
    double x,y,z,f;
    printf("Input x, y, z:\n");
    scanf("%lf%lf%lf", &x, &y, &z);
    f =(M_E * atan(x*x)) - ((acos(x)/M_E)*((x + 7*fabs((x*x) - y) + x*x)/((fabs(x - y) * z) + (x * x))));
    printf("f=%6lf",f);
    return 0;
}
