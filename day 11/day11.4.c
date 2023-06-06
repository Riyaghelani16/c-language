#include<stdio.h>

int main(){
	
	char a;
	   printf("enter value of a:");
	   scanf("%c",&a);
	
	switch(a){
		
		case 'm':
			printf("Monday");
			break;
			
		case 't':
			printf("Tuesday");
			break;
			
		case 'w':
			printf("Wednesday");
			break;
			
		case 'h':
			printf("Thursday");
			break;
			
		case 'f':
			printf("Friday");
			break;
			
		case 's':
			printf("saturday");
			break;
			
		case 'u':
			printf("Sunday");
			break;
			
		
	}
	
	return 0;
}
