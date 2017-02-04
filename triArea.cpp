#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dbl double

double trianglPerimeter(dbl a, dbl b, dbl c);
double triangleArea(dbl a, dbl b, dbl c, dbl p);

int main() {
    double a, b, c;
    double perimeter;
    double area;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        perimeter = trianglPerimeter(a, b, c);
        area = triangleArea(a, b, c, perimeter);
        printf("%lf\n", area);
    }

    return 0;
}

double trianglPerimeter(dbl a, dbl b, dbl c) {
    double perimeter;
    perimeter = (a+b+c) / 2;
    return perimeter;
}

double triangleArea(dbl a, dbl b, dbl c, dbl p) {
    double area;
    area = p * ((p-a) * (p-b) * (p-c));
    area = sqrt(area);
    return area;
}
