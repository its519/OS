#include<stdio.h>
#include<pthread.h>

int arr[1000];
void initialize()
{
	int i;
	for(i=0;i<1000;i++)
		arr[i]=i+1;
}
void *sum(void *arg)
{
	int start =(int)arg;
	int i,s=0;
	for(i=0;i<(start+100);i++)
	{
		s=s+arr[i];
	}
	return ((void*)s);
}

int main()
{
	initialize();
	int sum1=0;
	int sum2=0;
	int e=100;
	pthread_t t1[10];
	int j;
	for(j=0;j<10;j++)
	{
		pthread_create(& (t1[j]) , NULL, sum,(void*) (j*100));

		pthread_join(t1[j],(void**) &sum1);
		sum2=sum1+sum2;
	}
	printf("sum %d",sum2);
	return 0;
}
