/*	Cross Character
*
*	Convert a given string to its cross string (i.e Diagonal from left-right and from right-left).
*
*	Input:
*	  The first line of input contains a single integer T denoting the number of test cases. Then 
*	  T test cases follow. Each test case consist of two lines. The first line of each test case 
*	  consists of a String in lower case.
*
*	Output:
*  	  Print given string(in lower case) in cross manner.
*
*	Constraints:
*		1 = T = 100
*		1 = length of string = 50
*
*	Example:
*		Input
*			2
*			geeks
*			geeksforgeeks
*
*	Output
*		g   s e k   e   e k g   s
*		
*		g           s e         k   e       e     k     e       s   g         f r           o           f r         s   g       k     e     e       e   e         k g           s
*
*	Explanation:
*		G   S
*		 E K
*		  E
*		 E K
*		G   S
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int T, i, j, length;
	char str[100000];
	scanf("%d",&T);
	while(T--){
		scanf("%s",str);
		length = strlen(str) - 1;
		for(i = 0; i <= length; i++){
			for(j = 0; j <= length; j++){
				if((j == i) || (j == length - i))
					printf("%c",str[j]);
				else
					printf(" ");
			}
			printf("\n");
		}		
	}
	return 0;
}
