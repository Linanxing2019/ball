//上下弹跳的小球

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	int x=5;
	int  y=10;

	int height=20;
	int velocity=1;

	while(1)
	{
		x=x+velocity;
		system("cls");		//清屏函数

		//输出小球前面的空行
		for(i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++)
			printf(" ");
		printf("o");        //输出小球o
		printf("\n");

		if(x==height)
			velocity=-velocity;
		if(x==0)
			velocity=-velocity;
	}
	return 0;
}

