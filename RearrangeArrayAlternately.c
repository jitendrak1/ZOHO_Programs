/*	Rearrange Array Alternately
*
*	Given a sorted array, rearrange  the array alternately i.e first element should be max value, 
*	second min value, third second max, fourth second min and so on. 
*	Eg: arr[] = {1, 2, 3, 4, 5, 6, 7} 
*	O/P: {7, 1, 6, 2, 5, 3, 4} 
*
*	Input:
*	First line of input ia the number of test cases T. First line of test case contain the array size 
*	'N' and second line of test case contain the array.
*
*	Output:
*	Numbers in the required form are displayed to the user.
*
*	Constraints:
*		1 <=T<= 30
*		1 <=N<= 100
*		1 <=arr[i]<= 1000
*
*	Example: 
*		Input:
*			2
*			6
*			1 2 3 4 5 6
*			11 
*			10 20 30 40 50 60 70 80 90 100 110
*
*		Output:
*			6 1 5 2 4 3
*			110 10 100 20 90 30 80 40 70 50 60
*/
#include<stdio.h>
int main(){
	int T, N, i, arr[100000];
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(i = 0; i < N; i++)
			scanf("%d",&arr[i]);
		for(i = 0; i < (N - i - 1); i++){
			printf("%d %d ",arr[N-i-1], arr[i]);
		}
		if(i == (N - i - 1))
			printf("%d",arr[N-i-1]);
		printf("\n");
	}
	return 0;
}
