#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRECISION 10000000

int main()
{
    double pointsCircle = 0, pointsSquare = 0;
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < PRECISION; i++)
    {
        double x = (float)rand() / RAND_MAX;
        double y = (float)rand() / RAND_MAX;

        double distance = x * x + y * y;
        if (distance <= 1)
        {
            pointsCircle++;
        }
        pointsSquare++;
    }

    printf("%f\n", (double)(4 * pointsCircle / pointsSquare));

    return 0;
}
