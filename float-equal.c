#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    int k = (z*100000+0.5);
    int k1 = (z1*100000+0.5);
    if (k == k1) {
        z = (m + x) / y;
    }
    printf("Z is  %f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
