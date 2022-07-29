#include <stdio.h>
#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif
int main() {
    double radius; 
    scanf("%lf", &radius); 
    printf("%lf\n%lf\n", radius*radius*M_PI, 2*radius*radius); 
    return 0;
}
