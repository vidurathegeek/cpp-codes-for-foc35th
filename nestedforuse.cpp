#include <iostream>
using namespace std;
int x;

int main(){
 	cout << "Enter number" << endl;
 	cin >> x ;
 	for (int i=1; i<=x; i++){
 		for(int j=0; j<i ;j++){
 			cout << "*";
 		}
 		cout << endl;
 	}
 	for(int k=0; k<x ; k++){
 		for(int o=1 ; o<=k ; o++){
 			cout << o;
 		}
 		cout << endl;
 	}
}
 //FOM 35 vidurathegeek

