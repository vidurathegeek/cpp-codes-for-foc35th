#include <iostream>

using namespace std;
int lol [3] [5];
int lol2 [5] [3];

int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cin >> lol [i] [j];
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			lol2 [j] [i] = lol [i] [j];
			cout << lol2 [j] [i] << "\t" ;
		}
		cout << endl;
	}
}
//FOC 35th vidurathegeek
