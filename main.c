#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	
	if(a<b)
		return b;
}

int main(){
	return 0;
}*/

/*Lab03
int sumTwo(int x, int y){
	return (x+y);
}

int square(int n){
	return (n*n);
}

int get_Max(int a, int b){
	
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
}*/

/*Lab04
int square(int n);

int main(){
	int result;
	result=square(5);
	printf("%d", result);
}

int square(int n){
	return (n*n);
}*/

/*Lab07*/
int factorial(int m);
int combination(int n, int r);

int main(){
	int p, q;
	int res;
	
	printf("put n and r : ");
	scanf("%d %d", &p, &q);
	
	res = combination(p, q);
	printf("%d\n",res);
}

int factorial(m){
	int res=1, i;
	for(i=1;i<=m;++i){
		res*=i;
	}
	return res;
}

int combination(n, r){
	int low, high;
	
	low = factorial(n-r)*factorial(r);
	high = factorial(n);
	return high/low;
}
