/*	Sum of primes
*
*	Your task is to calculate sum of primes present as digits of given number N.
*
*	Input:
*	The first line of input contains an integer T denoting the number of test cases. Then T test cases 
*	follow. The next T lines contains an integer N.
*
*	Output:
*	Print sum of primes in the digit
*
*	Constraints:
*		1 = T = 50
*		2 = N = 50000
*
*	Example:
*		Input:
*			2
*			333
*			686
*		Output:
*			9
*			0
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int T, N, primeNoSum = 0;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		while((N % 10 != 0) || (N > 0)){
			primeNoSum = primeNoSum + (N % 10);
			N = N / 10;
		}
		printf("%d\n", primeNoSum % 10);
		primeNoSum = 0;	
	}
	return 0;
}
