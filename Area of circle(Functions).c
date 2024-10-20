//Area of circle(Functions)
#include <stdio.h>

#define PI 3.14159

float calculateArea(float radius);

int main() {
    float radius, area;

    printf("Enter the radius in centimetres: ");
    scanf("%f", &radius);

    area = calculateArea(radius);
    printf("The Area of the circle in centimetre square is: %.2f\n", area);

    return 0;
}

float calculateArea(float radius) {
    return PI * radius * radius;
}