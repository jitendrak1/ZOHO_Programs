/* Given a number N. Find if it can be expressed as sum of two prime numbers.
* Input:
* 	The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N as input.
* Output:
* 	For each test case, In new line print "Yes" if it can be expressed, Otherwise print "No".
*
* Constraints:
* 	1<=T<=2000
* 	1<=N<=106
* Example:
*	Input:
*		2
*		34
*		23
* Output:
*	Yes
*	No
*/
int isPrime(int n){
	int i;
	for(i = 2; i <= (n/2); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int N, T, i, flag = 0;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(i = 2; i <= (N/2); i++){
			if(isPrime(i) == 1){
				if(isPrime(N-i) == 1){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1)
			printf("Yes\n");
		else
			printf("No\n");
		flag = 0;
	}
	return 0;	
}
