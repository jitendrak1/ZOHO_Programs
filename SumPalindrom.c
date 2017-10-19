/* Sum Palindrome
*	Given a number, reverse it and add it to itself unless it becomes a palindrome or the the count 
*	becomes 5 times. If it becomes a palindrome then print that palindrome number, otherwise print -1.
*	
*	Input: 
*	  First line of the input contains an integer T denoting the number of test cases. Each test case 
*	  has a single line containing a number.
*
*	Output: 
*	  Corresponding to each test case, print the palindrome number or -1 as stated above.
*
*	Constraints:
*	  1 <= T <= 200
*	  1 <= N <=1000
*
*	Example:
*		Input:
*			2
*			23
*			30
*		Output:
*			55
*			33
*/
#include<stdio.h>
int main(){
	int T, N, temp, actualValue = 0, palindromValue = 0;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		palindromValue = 0;
		actualValue = N;
		while((N%10 != 0) || (N != 0)){
			temp = N % 10;
			N = N / 10;
			palindromValue = (palindromValue * 10) + temp;	
		}
		printf("%d\n", actualValue + palindromValue);
	}
	return 0;
}
