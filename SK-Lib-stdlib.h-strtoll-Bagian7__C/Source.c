#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "11011 55 -123 ff 0xff";
	char* pEnd;

	long long int val1 = strtoll(str, &pEnd, 2);
	long long int val2 = strtoll(pEnd, &pEnd, 8);
	long long int val3 = strtoll(pEnd, &pEnd, 10);
	long long int val4 = strtoll(pEnd, &pEnd, 16);
	long long int val5 = strtoll(pEnd, &pEnd, 0);

	//menampilkan hasil
	printf("val1 = %lld\n", val1);
	printf("val2 = %lld\n", val2);
	printf("val3 = %lld\n", val3);
	printf("val4 = %lld\n", val4);
	printf("val5 = %lld\n", val5);

	_getch();
	return 0;
}