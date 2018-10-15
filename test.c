//fork with complete details
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int arr[1000];
    int i=0,j=0,sum=0, sum1=0;
    for(i=0;i<1000;i++)
	{
        arr[i]=i+1;
		sum1 = sum1+arr[i];
	}
	printf("sum1 is %d\n\n", sum1);
	int cpid = fork();
	if (cpid == 0)
	{
		i = 0;
		while(i < 100)
		{
			sum = sum+arr[j];
			j++; i++;
		}
		printf("hi, i am c1 and sum is %d and j is %d\n", sum, j);
		cpid = fork();
		if (cpid == 0)
		{
			i = 0;
			while(i < 100)
			{
				sum = sum+arr[j];
				j++; i++;
			}
			printf("hi, i am c2 and sum is %d and j is %d\n", sum, j);
			cpid = fork();
			if (cpid == 0)
			{
				i = 0;
				while(i < 100)
				{
					sum = sum+arr[j];
					j++; i++;
				}
				printf("hi, i am c3 and sum is %d and j is %d\n", sum, j);
				cpid = fork();
				if (cpid == 0)
				{
					i = 0;
					while(i < 100)
					{
						sum = sum+arr[j];
						j++; i++;
					}
					printf("hi, i am c4 and sum is %d and j is %d\n", sum, j);
					cpid = fork();
				if (cpid == 0)
				{
					i = 0;
					while(i < 100)
					{
						sum = sum+arr[j];
						j++; i++;
					}
					printf("hi, i am c5 and sum is %d and j is %d\n", sum, j);					
					cpid = fork();
				if (cpid == 0)
				{
					i = 0;
					while(i < 100)
					{
						sum = sum+arr[j];
						j++; i++;
					}printf("hi, i am c6 and sum is %d and j is %d\n", sum, j);
					cpid = fork();
				if (cpid == 0)
				{
					i = 0;
					while(i < 100)
					{
						sum = sum+arr[j];
						j++; i++;
					}printf("hi, i am c7 and sum is %d and j is %d\n", sum, j);
					cpid = fork();
					if (cpid == 0)
					{
						i = 0;
						while(i < 100)
						{
							sum = sum+arr[j];
							j++; i++;
						}printf("hi, i am c8 and sum is %d and j is %d\n", sum, j);
						cpid = fork();
						if (cpid == 0)
						{
							i = 0;
							while(i < 100)
							{
								sum = sum+arr[j];
								j++; i++;
							}printf("hi, i am c9 and sum is %d and j is %d\n", sum, j);
							cpid = fork();
							if (cpid == 0)
							{
								i = 0;
								while(i < 100)
								{
									sum = sum+arr[j];
									j++; i++;
								}printf("hi, i am c10 and sum is %d and j is %d\n", sum, j);
								
							}
							else if(cpid == -1)
							{
								printf("fork 10 failed\n");
							}
							else
							{
								wait(NULL);
								printf("hi, i am parent 10\n");
							}
						}
						else if(cpid == -1)
						{
							printf("fork 9 failed\n");
						}
						else
						{
							wait(NULL);
							printf("hi, i am parent 9\n");
						}
					}
					else if(cpid == -1)
					{
						printf("fork 8 failed\n");
					}
					else
					{
						wait(NULL);
						printf("hi, i am parent 8\n");
					}
					}
				else if(cpid == -1)
				{
					printf("fork 7 failed\n");
				}
				else
				{
					wait(NULL);
					printf("hi, i am parent 7\n");
				}
				}
				else if(cpid == -1)
				{
					printf("fork 6 failed\n");
				}
				else
				{
					wait(NULL);
					printf("hi, i am parent 6\n");
				}
				}
				else if(cpid == -1)
				{
					printf("fork 5 failed\n");
				}
				else
				{
					wait(NULL);
					printf("hi, i am parent 5\n");
				}
				
				}
				else if(cpid == -1)
				{
					printf("fork 4 failed\n");
				}
				else
				{
					wait(NULL);
					printf("hi, i am parent 4\n");
				}
			}
			else if(cpid == -1)
			{
				printf("fork 3 failed\n");
			}
			else
			{
				wait(NULL);
				printf("hi, i am parent 3\n");
			}
		}
		else if(cpid == -1)
		{
			printf("fork 2 failed\n");
		}
		else
		{
			wait(NULL);
			printf("hi, i am parent 2\n");
		}
	}
	else if(cpid == -1)
	{
		printf("fork1 failed\n");
	}
	else
	{
		wait(NULL);
		printf("hi, i am parent 1\n");
	}	

	return 0;
}
