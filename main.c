#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Lab01
void print_star(){
	int i;
	for(i=0; i<10; i++){
		printf("*");
	}
}

int main(int argc, char *argv[]) {
	print_star();
	print_star();
	print_star();
	return 0;
}*/

/*Lab02*/
int sumTwo(int x, int y){
	return (x+y);
}

int square(int n){
	return (n*n);
}

int get_Max(int a, int b){
	int max;
	
	if(a<b)
		return b;
}

int main(){
	int p, q, r;
	
	p=sumTwo(15,45);
	q=square(10);
	r=get_Max(15, 45);
	
	printf("%d\t%d\t%d\n", p, q, r);
}
