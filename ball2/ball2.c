//С������

# include<stdio.h>
# include<stdlib.h>
int main()
{
	int i,j;
	int x=1;
	int y=10;
	for(x=1;x<10;x++)
	{
		system("cls");			//��������
		//���С������Ŀ���
		for(i=0;i<x;i++)
			printf("\n");
		//���С����ߵĿո�
		for(j=0;j<y;j++)
			printf(" ");
		printf("o");			//���С��
		printf("\n");
	}
	return 0;
}