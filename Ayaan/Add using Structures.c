#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} d1, d2, sumOfDistances;
int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet\n");
    scanf("%d", &d1.feet);
    printf("Enter inch\n");
    scanf("%f", &d1.inch);
	printf("\nEnter information for 2nd distance\n");
    printf("Enter feet\n");
    scanf("%d", &d2.feet);
    printf("Enter inch\n");
    scanf("%f", &d2.inch);
    sumOfDistances.feet = d1.feet+d2.feet;
    sumOfDistances.inch = d1.inch+d2.inch;
    while (sumOfDistances.inch>=12.0)
    {
        sumOfDistances.inch = sumOfDistances.inch-12.0;
        ++sumOfDistances.feet;
    }
    printf("\n**Sum of distances**\n");
    printf("%d feets %.2f inches\n",sumOfDistances.feet, sumOfDistances.inch);
    return 0;
}
