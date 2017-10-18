/*---- Count the characters ----
Given a string S. The task is to count the characters that have ‘N’ number of occurrences. If a character appears consecutively it is counted as 1 occurrence.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string S and a number N as input.

Output:
For each test case, print the count of characters in new line.

Constraints:
1<=T<=100
1<=|String length |<=104
1<=N<=103

Example:
Input:
2
abc 1
geeksforgeeks 2

Output:
3
4
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[26] = {0};
	int T, N, i = 0, count;
	char S[10000];
	scanf("%d",&T);
	while(T > 0){
		scanf("%s",S);
    	scanf("%d",&N);
    	count = 0;
    	i = 0;
    	while(i < strlen(S)){
    		if((i == 0) && (S[i] == S[i+1])){
    			arr[S[i]-'a']++;
    			i = i + 1;
    		}else if(i == 0){
    			arr[S[i]-'a']++;
    		}else if(S[i] == S[i+1]){
    			arr[S[i]-'a']++;
    			i = i + 1;
    		}else{
    	    	arr[S[i]-'a']++;
    	    }
    	    
    	    if(arr[S[i]-'a'] == N){
    	    	count++;
    	    	arr[S[i]-'a'] = 0;
    	    }
    	    i++;
    	}
    	printf("%d\n", count);
    	T--;
    }
	
	return 0;
}
