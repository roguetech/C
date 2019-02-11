#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double height = 0;
    double width = 0;
    double perimeter = 0.0;
    double area = 0.0;
    printf("Welcome to Rectangle Calculator\n");
    printf("Please Enter the Height: \n");
    scanf("%lf", &height);
    printf("Please Enter the Width: \n");
    scanf("%lf", &width);
    perimeter = (height + width) * 2.0;
    area = height * width;

    printf("Area is: %.2lf\n", area);
    printf("Perimeter is: %.2lf\n", perimeter);

    return 0;
}
