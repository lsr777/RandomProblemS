#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dbl double

/* there are two functions for Angle3, one is using acos()
   another is using add-sub
*/
/* acos() = . . . radian, convert it to degree,
   degree = radian * (180 / pi)
*/

double angleA(dbl a, dbl b, dbl c);
double angleB(dbl a, dbl b, dbl c);
double angleC1(dbl a, dbl b, dbl c);
double angleC2(dbl angle1, dbl angle2);

int main() {
    double a, b, c;
    double angle1, angle2, angle3, angle31;
    double SumOfAngleS;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        SumOfAngleS = 0;

        angle1 = angleA(a, b, c);
        angle2 = angleB(a, b, c);
        angle3 = angleC1(a, b, c);
        angle31 = angleC2(angle1, angle2);
        SumOfAngleS = ceil(angle1 + angle2 + angle3);

        printf("%lf\n", angle1);
        printf("%lf\n", angle2);
        printf("%lf\n", angle3);
        printf("%lf\n", angle31);
        printf("%lf\n", SumOfAngleS);
    }

    return 0;
}

double angleA(dbl a, dbl b, dbl c) {
    double result1, result2;

    result1 = ((b*b) + (c*c) - (a*a)) / (2 * (b*c));
    result2 = acos(result1);
    result2 *= (180 / 3.1416);

    return result2;
}

double angleB(dbl a, dbl b, dbl c) {
    double result1, result2;

    result1 = ((a*a) + (c*c) - (b*b)) / (2 * (a*c));
    result2 = acos(result1);
    result2 *= (180 / 3.1416);

    return result2;
}

double angleC1(dbl a, dbl b, dbl c) {
    double result1, result2;

    result1 = ((b*b) + (a*a) - (c*c)) / (2 * (b*a));
    result2 = acos(result1);
    result2 *= (180 / 3.1416);

    return result2;
}

double angleC2(dbl angle1, dbl angle2) {
    double angle3;
    angle3 = 180 - (angle1 + angle2);
    return angle3;
}
