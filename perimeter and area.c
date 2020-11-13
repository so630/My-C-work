#include <stdio.h>
#include <stdlib.h>

void main()
{
    double width = 2.0;
    double length = 3.0;
    double perimeter;
    double area;

    perimeter = 2.0 * (width + length);
    area = width * length;

    printf("the perimeter is: %f", perimeter);
    printf("\n the area is: %f", area);
}
