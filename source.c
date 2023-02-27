#include <stdio.h>
 
char *collatz(int a1) {
	if( a1 == 1)
		return "완료";
		
	if( a1 & 1 == 1 ) 
		a1 = ((3 * a1) + 1) / 2;
	else
		a1 /= 2;
		
	collatz(a1);
}	

int main() {
	for(int i = 1; i < 10000000;i++)
		printf("[%d] %s\n", i, collatz(i));

	return 0;
}
