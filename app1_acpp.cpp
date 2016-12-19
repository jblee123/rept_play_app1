#include <cstdio>

#include <foo1_a.h>
#include <foo2_a.h>
#include <foo3_a.h>

int main() {
	printf("val1: %d\n", foo1_getVal1());
	printf("val2: %d\n", foo2_getVal1());
	printf("val3: %d\n", foo3_getVal1());

	return 0;
}
