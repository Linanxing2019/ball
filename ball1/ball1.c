//显示静止的小球

# include<stdio.h>
int main()
{
	int i,j;     
	int x=5;
	int y=10;
	//输出小球上面的空行
	for(i=0;i<x;i++)
		printf("\n");
	//输出小球左边的空格
	for(j=0;j<y;j++)
		printf(" ");
	printf("o");			//输出小球o
	printf("\n");
	return 0;
}