#include <stdio.h>

int main() {
    float radius, surfaceArea;
    float pi = 3.1416;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surfaceArea = 4 * pi * radius * radius;

    printf("Surface area of the sphere: %.2f\n", surfaceArea);

    return 0;
}
