#include <stdio.h>

int ndate;
int nmonth;
int nyear;
int noption;

int main(){
	printf("Enter the date \n");
	scanf("%d",&ndate);
	printf("Enter the month\n");
	scanf("%d",&nmonth);
	printf("Enter the year\n");
	scanf("%d",&nyear);
	printf("Enter your Option \n");
	scanf("%d", &noption);

	if(noption = 1){
		printf("%d\\ %d\\ %d",ndate,nmonth,nyear%100);
		
	} 

	else if(noption = 2){
		printf("%d\\ %d\\ %d",ndate,nmonth,nyear);
	}

	else if(noption = 3){
		printf("%d",ndate); // print regular date
		//selecting wether it's rd, st, nd or th eg :- 3rd, 1st, 2nd, 4th
		switch(ndate){
		case 1:
		case 21:
		case 31: printf("st");
				break;
		case 2:
		case 22: printf("nd");
				break;
		case 3:
		case 23: printf("rd");
				break;
		default: printf("th");
				break;
		}
		printf(" ");
		//month selection accoding to respective month number eg :- 3 == March
		switch(nmonth){
		case 1: printf("January");
				break;
		case 2: printf("February");
				break;
		case 3: printf("March");
				break;
		case 4: printf("April");
				break;
		case 5: printf("May");
				break;
		case 6: printf("June");
				break;
		case 7: printf("July");
				break;
		case 8: printf("August");
				break;
		case 9: printf("September");
				break;
		case 10: printf("October");
				break;
		case 11: printf("November");
				break;
		case 12: printf("December");
				break;
		}
		printf(" "); //print whitespace for goodlook	
		printf("%d",nyear); //print regular year
	}

}
// FOM 35th vidurathegeek
