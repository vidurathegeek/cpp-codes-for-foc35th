#include <iostream>

using namespace std;

int x,xn,revno=0,n;

int main(){
	cin >> xn;
	x=xn;
	while(x!=0){
		n = x%10;
	    revno = revno*10 + n;
		x=x/10;	
	}
    cout << revno << endl;
    cout << xn << endl;
    if (xn==revno){
    	cout << "It's a Palindrome" << endl;
	}
	else {
		cout << "It's not a Palindrome" << endl;
	}
}
//File name is reversenumber.cpp
//FOC 35th vidurathegeek
