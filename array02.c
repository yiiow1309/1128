#include<stdio.h>
#define STUDENTS 5
int main()
{
	int score[STUDENTS],i,sum = 0;
	float avg;
	
	for(i=0; i<STUDENTS; i++)
	{
		printf("%d번의 학생 성적입력:",i+1);
		scanf("%d",&score[i]);
		sum += score[i];
	}
	for(i=0; i<STUDENTS; i++)
	   printf("%d번 학생의 성적= %d\n",i,score[i]);
	   
    printf("\n전체 학생들 점수의합 = %d\n",sum);
	   
	avg = (float)sum/STUDENTS;
	
	printf("\n전체 학생들 점수의 평균= %.2f\n",avg);
	

}
