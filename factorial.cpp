#include <iostream>

using namespace std;
int num;
unsigned long long fact = 1; // to check number more than 50
int main(){
	cout << "Enter any number" << endl;
	cin >> num;
	for(int i=1; i<=num; i++){
		fact = fact * i;
	}
	//printf(" %d \n",fact );
	//cout.setf(ios::fixed);
	//cout.precision(0);
	cout << fact << endl;
}
// FOM 35th vidurathegeek
