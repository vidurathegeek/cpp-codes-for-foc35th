#include <iostream>

using namespace std;

int x;
int tot;

int main(){
	cin >> x;
	while (x!=999){
		tot+=x;
		cin >> x;
	}
	cout << tot << endl;
}
//FOC 35 vidurathegeek
