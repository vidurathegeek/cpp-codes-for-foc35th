#include <iostream>

using namespace std;

int x,y,tot;
void printTotal(int x,int y);

int main(){
	cin >> x;
	cin >> y;
	printTotal(x,y);
	return 0;
}

void printTotal(int x, int y){
	tot = x+y;
	cout << "Total is " << tot << endl;
}
// FOC 35th vidurathegeek
/*
#include <iostream>

using namespace std;

int x,y,tot;
int printTotal(int x,int y);

int main(){
	cin >> x;
	cin >> y;
	printTotal(x,y);
	cout << tot << endl;

}

int printTotal(int x,int  y){
	tot = x+y;
	return tot;
}
*/
// here the 2nd one is the function with return value thing.
