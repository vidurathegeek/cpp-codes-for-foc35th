// #include <stdio.h>
#include <iostream>

using namespace std;
int num;
double fact = 1;
int main(){
	//printf("Enter any number \n");
	cout << "Enter any number" << endl;
	cin >> num;
	//scanf("%d", &num);
	for(int i=1; i<=num; i++){
		fact = fact * i;
	}
	printf(" %d \n",fact );
	cout << fact << endl;
}
// FOM 35th vidurathegeek
