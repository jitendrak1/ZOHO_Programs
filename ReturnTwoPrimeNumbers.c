/*	Return two prime numbers
*
*	Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given 
*	number. There are several combinations possible. Print only first such pair.
*
*	NOTE: A solution will always exist, read Goldbach�s conjecture.
*
*	Also, solve the problem in linear time complexity, i.e., O(n).
*
*	Input:
*	 The first line contains T, the number of test cases. The following T lines consist of a number each,
*	 for which we'll find two prime numbers.
*
*	Note: The number would always be an even number.
*
*	Output:
*	 For every test case print two prime numbers space separated, such that the smaller number appears
*	 first. Answer for each test case must be in a new line.
*
*	Constraints:
*		1 = T = 70
*		1 = N = 10000
*
*	Example:
*		Input:
*			5
*			74
*			1024
*			66 
*			8
*			9990
*
*		Output:
*			3 71
*			3 1021
*			5 61
*			3 5
*			17 9973
*/
#include<stdio.h>
int isPrime(int n){
	int i;
	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int T, N, i;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(i = 2; i <= N/2; i++){
			if(isPrime(i)){
				if(isPrime(N-i)){
					break;
				}
			}
		}
		printf("%d %d\n",i,(N-i));
	}
	return 0;
}
