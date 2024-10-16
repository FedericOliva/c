#include <stdio.h>

int massimo(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
	return 0;
}

int main() {
	int x = 10, y = 5;
	printf("massimo tra x e y: % d",massimo(x, y));
}