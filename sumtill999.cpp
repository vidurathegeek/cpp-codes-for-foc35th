#include <iostream>

using namespace std;

int x,nx;
int tot;

int main(){
	while (true){
		cin >> x;
		while (x!=999){
			tot+=x;
			cin >> x;
		}
		cout << tot << endl;
	}	
}
//FOC 35 vidurathegeek
