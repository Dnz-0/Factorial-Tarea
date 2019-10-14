

#include <stdio.h>



int factorialR(int);


int main(){

	int f;
	printf("Escribe un numero:");
	scanf("%d",&f);
	printf("\n%d! = %d\n",f, factorialR(f));
	return 0;

}

int factorialR(int n){

	if(n==0)
		n=1;
	else
		n=n*factorialR(n-1);
	return n;
}









