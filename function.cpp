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
