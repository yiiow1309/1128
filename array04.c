#include<stdio.h>

int main()
{
	int i,score[5];
	
	printf("int Ÿ���� �޸� ũ��=%d\n",sizeof (int));
	printf("int�� ������ �޸� ũ��=%d\n",sizeof (i));
	printf("int�� �迭 ������ �޸� ũ��=%d\n",sizeof (score[0]));
	printf("int�� �迭�� �޸� ũ��=%d\n",sizeof (score));
	printf("score �迭 ������ ���� = %d\n",sizeof(score)/sizeof(score[0]));
	return 0;
}
