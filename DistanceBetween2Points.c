/*	Distance between 2 points
*
*	Given coordinates of 2 points on a cartesian plane, output the distance between them rounded up to 
*	nearest integer.
*
*	Input:
*	  The first line of the input contains the number of test cases T. Each line contains 4 integers 
*	  denoting those 2 points as (x1,y1), (x2,y2).
*
*	Output: 
*	  For each test case print in a single line the distance between the two points.
*
*	Constraints:
*		1 <= T <=100
*		-1000000 <= |x1,x2,y1,y2| <=1000000
*		 
*	Example: 
*		Input:
*			4
*			0 0 2 -2
*			-20 23 -15 68
*			30 37 79 -51
*			-69 63 57 11
*		
*		Output:
*			3
*			45
*			101
*			136
*/
#include<stdio.h>
#include<math.h>
void isPerfectSquare(int n){
	float a = sqrt(n);
	printf("%.0f",roundf(a));
}
int main(){
	int T, x1, x2, y1, y2, result;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		isPerfectSquare((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
	}
	return 0;
}
