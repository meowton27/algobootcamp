#include <stdio.h>

 int main() {
	int N1, N2;
 	scanf("%d\n%d", &N1, &N2);
 	(N1>N2) ? printf("%d", (N1-N2)) : printf("%d", (N1+N2));
	return 0;
}

