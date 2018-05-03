#include <iostream>

using namespace std;

int marks[10];
int maxm=0;

int main(){
	for(int i=0;i<10;i++){
		cin >> marks[i];
	}
	int min =marks[0];
	for(int i=0;i<10;i++){
		if(marks[i]>maxm){
			maxm = marks[i];
		}
		if(marks[i]<min){
			min = marks[i];
		}
	}
	cout << min << endl;
	cout << maxm << endl;
}
//FOC 15th vidurathegeek
