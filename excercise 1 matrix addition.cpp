#include <iostream>

using namespace std;
int lol1 [3] [3];
int lol2 [3] [3]; 

int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> lol1 [i] [j];
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> lol2 [i] [j];
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << lol1 [i] [j] + lol2 [i] [j] << "\t";
		}
		cout << endl;
	}
}
//FOC 35th vidurathegeek
