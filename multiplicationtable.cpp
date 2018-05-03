#include <iostream>

using namespace std;

int multitab [5] [5];
int main(){
	cout << "1 \t 2 \t 3 \t 4 \t 5" << endl;
	cout << "-----------------------------------" << endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			multitab [i] [j] = (i+1) * (j+1);
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout << multitab [i] [j] << "\t";
		}
		cout << endl;
	}	
}
//FOC 35th vidurathegeek
