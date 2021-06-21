#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void MaxMinElemets(int *Mass, int p, int *a=0, int *b=0, int *c=0, int *d=0){
	int i = 0;
	*a = Mass[0];
	for (i = 0; i < p; i++) {
		if (*a < Mass[i]) {
			*a= Mass[i];
			*b = i;
		}
	}

	*c = Mass[0];
	for (i = 0; i < 10; i++) {
		if (*c > Mass[i]) {
			*c = Mass[i];
			*d = i;
		}
	}
	
}

void main(void) {
	srand(time(NULL));
	int i, j=0, k=0,B[10],C[10],a=0,b=0,c=0,d=0;
	int A[10];
	for (i = 0; i < 10; i++) {
		A[i] = rand() % 10000;
		B[i] = rand() % 10000;
		C[i] = rand() % 10000;
	}
	for (i = 0; i < 10; i++) {
		printf("%5d", A[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%5d", B[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) 
		printf("%5d", C[i]);

MaxMinElemets(A, 10, &a, &b, &c, &d);
	printf("max number is %d , the number of it's element is %d ,the min number is %d,the number of it's elements %d \n", a, b, c, d);
	MaxMinElemets(B, 10, &a, &b, &c, &d);
	printf("max number is %d , the number of it's element is %d ,the min number is %d,the number of it's elements %d \n", a, b, c, d);

	MaxMinElemets(C, 10, &a, &b, &c, &d);
	printf("max number is %d , the number of it's element is %d ,the min number is %d,the number of it's elements %d \n", a, b, c, d);

	 
	_getch();
}