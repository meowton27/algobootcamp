#include <stdio.h>

 int main() {
 	int a;
 	scanf("%d", &a);
 	if (a>=1000) {
 		printf("More than 3 digits");
	 }	
	 
 	else if (a>=100) {
 		printf("3");
	 }	
	 
 	else if (a>=10) {
 		printf("2");
	 }
	 
 	else {
 		printf("1");
	 }
 	return 0;
 	
 }
