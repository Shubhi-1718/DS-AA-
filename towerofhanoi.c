#include <stdio.h>


void towerOfHanoi(int n, char fr, char tr, char ar)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", fr, tr);
		return;
	}
	towerOfHanoi(n-1, fr, ar, tr);
	printf("\n Move disk %d from rod %c to rod %c", n, fr, tr);
	towerOfHanoi(n-1, ar, tr, fr);
}

int main()
{
	int n;
	printf("\nEnter the no of disks ");
	scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B'); 
	return 0;
}
