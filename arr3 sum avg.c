#include<stdio.h>
int main()
{	int N;
	printf("Enter the size of arr. :");
	scanf("%d",&N);
    int a[N], i, sum = 0;
    float avg;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / (float)N;

    printf("\nSum of %d numbers: %d\n", N, sum);
    printf("\nAverage of %d numbers: %f\n", N, avg);

    return 0;
}
