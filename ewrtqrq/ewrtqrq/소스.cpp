#include<stdio.h>
#include<cstdlib>
#include<ctime>

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f �� �ɷȽ��ϴ�.", duration);
	return 0;
}