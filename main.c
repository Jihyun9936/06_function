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

/*Lab02
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
	return 0;
}*/

/*Lab03*/
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
	int a, b;
	a=2;
	b=5;

	printf("sumTwo : %i\n", sumTwo(a, b));
	printf("square : %i\n", square(a));
	printf("get_Max : %i\n", get_Max(a, b));
}
