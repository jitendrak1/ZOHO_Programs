/* Reversing the vowels...
* Given a string, reverse only the vowels present in it and print the resulting string.
* Input: 
*	First line of the input file contains an integer T denoting the number of test cases. 
* 	Then T test cases follow. Each test case has a single line containing a string.
*
* Output: 
* 	Corresponding to each test case, output the string with vowels reversed.
*
* Example:
*	Input:
*		4
*		geeksforgeeks
*		practice
*		wannacry
*		ransomware
*
*	Output:
*		geeksforgeeks
*		prectica
*		wannacry
*		rensamwora
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int T, left = 0, right = 0;
	char str[100000];
	scanf("%d",&T);
	while(T--){
		scanf("%s",str);
		right = strlen(str) - 1;
		for(left = 0; left < right; ){
			if((str[left] == 'a' || str[left] == 'e' || str[left] == 'i' || str[left] == 'o' || str[left] == 'u') && (str[right] == 'a' || str[right] == 'e' || str[right] == 'i' || str[right] == 'o' || str[right] == 'u')){
				str[right] = str[left] ^ str[right];
				str[left] = str[left] ^ str[right];
				str[right] = str[left] ^ str[right];
				left++;
				right--;
			}else{
				if(str[left] != 'a' && str[left] != 'e' && str[left] != 'i' && str[left] != 'o' && str[left] != 'u'){
					left++;
				}
				
				if(str[right] != 'a' && str[right] != 'e' && str[right] != 'i' && str[right] != 'o' && str[right] != 'u'){
					right--;
				}	
			}
		}
		printf("%s\n",str);
	}
	return 0;
}
