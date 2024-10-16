
int square_dist(double x1, double y1, double x2, double y2) {
	return (x1 - x2)* (x1 - x2) + (y1 - y2)* (y1 - y2);
}

int main(void) {
	int z = square_dist(1, 2, 3, 4);
	return 0;
}
