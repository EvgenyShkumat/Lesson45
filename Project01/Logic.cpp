//task 12
int find_min_index(int* vector, int length) {
	int min = *vector;
	int min_index = 0;

	for (int i = 1; i < length; i++)
	{
		if (*(vector + i) < min) {
			min = *(vector + i);
			min_index = i;
		}
	}

	return min_index;
}

int find_product_before_min(int* vector, int length, int min_index) {
	int product = 1;

	for (int i = 0; i < min_index; i++)
	{
		if (*(vector + i) > 0) {
			product *= *(vector + i);
		}
	}

	return product;
}

int find_sum_before_min(int* vector, int length, int min_index) {
	int sum = 0;

	for (int i = 0; i < min_index; i++)
	{
		sum += *(vector + i);
	}

	return sum;
}

