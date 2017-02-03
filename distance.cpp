#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dbl double

double Distance(dbl x1, dbl y1, dbl x2, dbl y2) {
    double distance;
    double powX, powY;

    powX = pow((x2 - x1), 2);
    powY = pow((y2 - y1), 2);
    distance = sqrt(powX + powY);

    return distance;
}

int main() {
    double x1, x2;
    double y1, y2;
    double distance;

    while(scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF) {
        distance = Distance(x1, y1, x2, y2);
        printf("%lf\n", distance);
    }

    return 0;
}
