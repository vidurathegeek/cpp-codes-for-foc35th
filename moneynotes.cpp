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
	if(count5!=0){
		cout<<"5000 notes " << count5 <<endl;
	}
	while (notes >= 2000){
		notes=notes-2000;
		count2+=1;
	}
	if(count2!=0){
		cout<<"2000 notes " << count2 <<endl;
	}
	while (notes >= 1000){
		notes=notes-5000;
		count1+=1;
	}
	if(count1!=0){
		cout<<"1000 notes " << count1 <<endl;
	}
	while (notes >= 500){
		notes=notes-500;
		count500+=1;
	}
	if(count500!=0){
		cout<<"500 notes " << count500 <<endl;
	}
	while (notes >= 100){
		notes=notes-100;
		count100+=1;
	}
	if(count100!=0){
		cout<<"100 notes " << count100 <<endl;
	}
	while (notes >= 50){
		notes=notes-50;
		count50+=1;
	}
	if(count50!=0){
		cout<<"50 notes " << count50 << endl;
	}
	while (notes >= 20){
		notes=notes-20;
		count20+=1;
	}
	if(count20!=0){
		cout<<"20 notes " << count20 << endl;
	}
	while (notes >= 10){
		notes=notes-10;
		count10+=1;
	}
	if(count10!=0){
		cout<<"10 notes " << count10 << endl;
	}	
}
//FOC 35th vidurathegeek
