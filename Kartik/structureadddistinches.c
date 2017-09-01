#include <stdio.h>
main()
{
    	struct Distance
    	{
        		int feet;
        		float inch;
    	}d1,d2;
    	int sum1;
    	float sum2;
    	printf("Enter information for 1st distance\n");
    	printf("Enter feet : ");
    	scanf("%d",&d1.feet);
    	printf("Enter inch : ");
    	scanf("%f",&d1.inch);
    	printf("Enter information for 2nd distance\n");
    	printf("Enter feet : ");
    	scanf("%d",&d2.feet);
    	printf("Enter inch : ");
    	scanf("%f",&d2.inch);
    	sum1=d1.feet+d2.feet;
    	sum2=d1.inch+d2.inch;
    	if (sum2>12.0)
    	{
       		 sum2 = sum2-12.0;
       		 sum1++;
    	}
    	printf("\nSum of distances = %d\'-%.1f\"",sum1,sum2);
    	return 0;
}

