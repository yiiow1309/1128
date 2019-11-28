#include<stdio.h>
#define STUDENTS 5
float get_avg(int score[], int n);
int main()
{
	int score[STUDENTS]={100,100,90,95,88};
	float avg;
	
	avg = get_avg(score,STUDENTS);
	print("ЦђБе= %.2f\n",avg);
	
	return 0;
}
float get_avg(int score[],int n)
{
	int i, sum = 0;
	for(i=0; i<n; i++)
	   sum += score[i];
	   
	return (float)sum/n;
}
