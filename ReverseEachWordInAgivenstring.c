/*	Reverse each word in a given string
*
*	Given a String of length N reverse each word in it. Words are separated by dots.
*
*	Input:
*		The first line contains T denoting the number of testcases. Then follows description of 
*		testcases. Each case contains a string containing dots and characters.
*
*	Output:
*		For each test case, output a String in single line containing the reversed words of the given 
*		String.
*
*	Constraints:
*		1<=T<=10
*		1<=Length of String<=2000
*
*	Example:
*		Input:
*			2
*			i.like.this.program.very.much
*			pqr.mno
*
*		Output:
*			i.ekil.siht.margorp.yrev.hcum
*			rqp.onm
*
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int T, first = 0, last = 0, temp = 0;
	char str[100000];
	scanf("%d",&T);
	while(T--){
		scanf("%s",str);
		first = 0;
		last = 0;
		for(first = 0; first < strlen(str);){
			while((str[last] != '.') && (last < strlen(str)))
				last++;
			temp = last - 1;
			while(first < temp){
				str[temp] = str[first] ^ str[temp];
				str[first] = str[first] ^ str[temp];
				str[temp] = str[first] ^ str[temp];
				first++;
				temp--;
			}
			last++;
			first = last;
		}
		printf("%s\n",str);
	}
	return 0;
}
