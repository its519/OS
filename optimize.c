#include<stdlib.h>
#include<stdio.h>

int main()
{
    int arr[1000];
    int i=0,j=0,sum=0, sum1=0, sump = 0;
    for(i=0;i<1000;i++)
	{
        arr[i]=i+1;
		//sum1 = sum1+arr[i];
	}
	printf("sum1 is %d\n\n", sum1);
	
	int cpid , k=1;
	cpid = fork();
	for(k; k <= 10; k++)
	{
		if (cpid == 0)
		{
			i=0;		
			while(i < 100)
			{
				sum = sum + arr[j];
				i++; j++;
			}
			printf("sum is %d\n", sum);
			cpid = fork();
		}
	}
	wait(NULL);
	return 0;
}
