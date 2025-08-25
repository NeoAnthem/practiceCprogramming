#include <stdio.h>
int main()
{
    int x = 5;
    double d = 2.3;

    double ans = x + d; // x is implicitly casted to double
    printf("%lf\n", ans);
}