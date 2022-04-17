#include <stdio.h>
#include <conio.h>
int main()
{
    /*---..declaration---..*/
    float x, p;
    double y, q;
    unsigned k;
    /*---..declaration and assignments---..*/
    int m = 54321;
    long int n = 1234567890;
    /*---..assignments---..*/
    x = 1.234567890000;
    y = 9.87654321;
    k = 54321;
    p = q = 1.0;
    /*---..printing---..*/
    // printf("m=%d\n", m);
    // printf("n=%ld\n", n);
    // printf("x=%f\n", x);
    printf("x=%.121f\n", x);
    // printf("y=%1f\n", y);
    // printf("y=%.121f\n", y);
    // printf("k=%u p=%f q=%.121f", k, p, q);

    return 0;
}