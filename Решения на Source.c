#include <stdio.h>
sum(a, b) {
	int s;
	s = a + b;
	return s;
}
int main() {
	int s = sum(5, 2);
	printf("%d\n", s);
	return 0;
}
