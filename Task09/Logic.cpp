int find_max_element_index(int* vector, int length) {
	int max = *vector;
	int max_index = 0;

	for (int i = 1; i < length; i++)
	{
		if (*(vector + i) > max) {
			max = *(vector + i);
			max_index = i;
		}
	}

	return max_index;
}

int find_negative_product_before_max(int* vector, int length, int max) {
	int product = 1;

	for (int i = 0; i < max; i++)
	{
		if (*(vector + i) < 0) {
			product *= *(vector + i);
		}
	}

	return product;
}

int find_positive_sum_before_max(int* vector, int length, int max) {
	int sum = 0;

	for (int i = 0; i < max; i++)
	{
		if (*(vector + i) > 0) {
			sum += *(vector + i);
		}
	}

	return sum;
}