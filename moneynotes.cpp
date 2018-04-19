#include <iostream>

using namespace std;

long notes,count5,count2,count1,count500,count100,count50,count20,count10;
int preset [255] = {10,20,50,100,500,1000,2000,5000};

int main (){
	cin >> notes;
	while (notes >= 5000){
		notes=notes-5000;
		count5+=1;
	}
	while (notes >= 2000){
		notes=notes-2000;
		count2+=1;
	}
	while (notes >= 1000){
		notes=notes-5000;
		count1+=1;
	}
	while (notes >= 500){
		notes=notes-500;
		count500+=1;
	}
	while (notes >= 100){
		notes=notes-100;
		count100+=1;
	}
	while (notes >= 50){
		notes=notes-50;
		count50+=1;
	}
	while (notes >= 20){
		notes=notes-20;
		count20+=1;
	}
	while (notes >= 10){
		notes=notes-10;
		count10+=1;
	}
	cout<<"5000 notes" << count5 <<endl;
	cout<<"2000 notes" << count2 <<endl;
	cout<<"1000 notes" << count1 <<endl;
	cout<<"500 notes" << count500 <<endl;
	cout<<"100 notes" << count100 <<endl;
	cout<<"50 notes" << count50 << endl;
	cout<<"20 notes" << count20 << endl;
	cout<<"10 notes" << count10 << endl;
}
//FOC 53th vidurathegeek
