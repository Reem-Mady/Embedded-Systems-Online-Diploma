#include<stdio.h>
int Power(int base, int power) {
	if (power != 0) {
		return(base * Power(base, power - 1));
	}
	else
		return 1;

}
int main() {
	printf("Enter base number: ");
	fflush(stdout);
	int base, pow;
	scanf("%d", &base);
	printf("Enter power number (positive integer) : ");
	fflush(stdout);
	scanf("%d", &pow);
	printf("%d^%d = %d", base, pow, Power(base, pow));

}
