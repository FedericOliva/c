#include <math.h>

int max_pot10(int a) {
	int i = 0;
	while (pow(10, i) < a) {
		i++;
	}
	return --i;
}

int main(void) {
	int z = max_pot10(120);
}