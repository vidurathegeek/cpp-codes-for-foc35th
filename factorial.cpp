#include <stdio.h>

int num;
double fact = 1;
int main(){
	printf("Enter any number \n");
	scanf("%d", &num);
	for(int i=1; i<=num; i++){
		fact = fact * i;
	}
	printf(" %d \n",fact );
}
// FOM 35th vidurathegeek
