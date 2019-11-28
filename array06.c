#include<stdio.h>
#include<limits.h>
int main()
{
	int number[5],i,min,max;
	
	
	
	for(i=0; i<5; i++)
	{
		printf("다섯번 입력 하세요[%d]:",i+1);
		scanf("%d",&number[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("number[%d] = %d\n:",i);
	
	for(i=0; i<5; i++)
	{
		if(min > number[i])
		    min = number[i];
		if(max < number[i])
		    max = number[i];
	}	
	printf("배열 원소의 최소값 = %d,최대값은=%d 입니다\n",min,max);
	
	}
	
	return 0;
}   
