/* Sum of elements in matrix
*
*	Given a non null integer matrix,calculate the sum of its elements.
*
*	Input: 
*	 First line contains T , the number of test cases. First line of each test contains 2 integers
*	 N,M and N lines follow which contain M spaced integers.
*
*	Output:
*	 Single line for each test case containing the sum.
*
*	Constraints: 1<= N,M<=10 , elements of matrix   -1000<=matrix<=1000
*	Example:
*		Input:
*			1
*			2 3 
*			1 0 0
*			8 -9 -1
*		
*		Output :
*			-1
*
*/
int main(){
	int i, j, T, M, N, sum = 0;
	int arr[100][100];
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&M,&N);
		for(i = 0; i < M; i++){
			for(j = 0; j < N; j++){
				scanf("%d",&arr[i][j]);
				sum = sum + arr[i][j];
			}
		}
		printf("%d\n",sum);	
		sum = 0;
	}
	return 0;
}
