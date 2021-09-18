#include <stdio.h>

 int main() {
	int L, B, area, peri;
 	scanf("%d\n%d", &L, &B);
 	
 	area = L*B;
 	peri = 2*(L+B);
 	
 	if(area<peri){
 		printf("Peri\n%d", peri);
 	}
 	else if (area>peri){
 		printf("Area\n%d", area);
	}
	else {
		printf("Eq\n%d", area);
	}
	return 0;
}

