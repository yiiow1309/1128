#include<stdio.h>
#define STUDENTS 5
int main()
{
	int score[STUDENTS],i,sum = 0;
	float avg;
	
	for(i=0; i<STUDENTS; i++)
	{
		printf("%d���� �л� �����Է�:",i+1);
		scanf("%d",&score[i]);
		sum += score[i];
	}
	for(i=0; i<STUDENTS; i++)
	   printf("%d�� �л��� ����= %d\n",i,score[i]);
	   
    printf("\n��ü �л��� �������� = %d\n",sum);
	   
	avg = (float)sum/STUDENTS;
	
	printf("\n��ü �л��� ������ ���= %.2f\n",avg);
	

}
