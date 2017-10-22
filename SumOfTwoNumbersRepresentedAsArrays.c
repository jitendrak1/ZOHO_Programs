/*	Sum of two numbers represented as arrays.
*
*	Given two numbers represented by two arrays, write a function that returns sum array. The sum array
*	is an array representation of addition of two input arrays. It is not allowed to modify the arrays.
*
*	Input:
*	  The first line of input contains an integer T denoting the number of test cases.
*	  The first line of each test case contains two integers M and N separated by a space. 
*	  	M is the size of arr1 and N is the size of arr2.
*	  The second line of each test case contains M integers which is the input for arr1.
*	  The third line of each test case contains N integers which is the input for arr2.
*
*	Output:
*	  Print the sum list.
*
*	Constraints:
*		1 = T = 100
*		1 = N = M = 1000
*		0 = arr1[i], arr2[i] = 9
*
*	Example:
*		Input:
*			2
*			3 3
*			5 6 3
*			8 4 2
*
*			16 4
*			2 2 7 5 3 3 7 3 3 6 8 3 0 5 0 6 
*			4 3 3 8 
*	
*		Output:
*			1 4 0 5
*			2 2 7 5 3 3 7 3 3 6 8 3 4 8 4 4
*/
#include<stdio.h>
int main(){
	int T, N, M, i, j, arrSum = 0, borrow = 0;
	int arr1[10000], arr2[10000], result[10000];
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&M,&N);
		for(i = 0; i < M; i++)
			scanf("%d",&arr1[i]);
		for(j = 0; j < N; j++)
			scanf("%d", &arr2[j]);
		if(M > N){
			j = M;
			for(i = M - 1; i > -1; i--){
				result[i] = arr1[i] + arr2[--N] + borrow;
				borrow = 0;
				if(result[i] >= 10){
					borrow = result[i] / 10;
					result[i] = result[i] % 10;
				}
			}
		}else{
			j = N;
			for(i = N - 1; i > -1; i--){
				result[i] = arr1[--M] + arr2[i] + borrow;
				borrow = 0;
				if(result[i] >= 10){
					borrow = result[i] / 10;
					result[i] = result[i] % 10;
				}
			}	
		}
		if(borrow > 0){
			printf("%d ",borrow);
			borrow = 0;
		}
		for(i = 0; i < j; i++)
			printf("%d ", result[i]);
		printf("\n");
									
	}
	return 0;
}
