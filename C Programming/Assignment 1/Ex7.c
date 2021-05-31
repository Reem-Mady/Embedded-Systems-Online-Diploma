#include<stdio.h>

int main() {
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a: %f\n b:%f", a, b);
	fflush(stdout);
}
