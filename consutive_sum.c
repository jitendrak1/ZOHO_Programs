// find consicutive sum
#include<stdio.h>
int main()
{
	int n, i, j, temp = 0, count = 0;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i = 1; i < (n/2 + 1); i++)
	{
		j = i;
		while(temp < n){
			temp = temp + (j++);
		}
		if(temp == n){
			count++;
		}
		temp = 0;
	}
	printf("\n Count : %d", count);
	return 0;
}
