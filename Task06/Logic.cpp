#include <iostream>
//task 06
int find_abs_max_element_index(int* vector, int length) {
	int max = abs(*vector);
	int max_index = 0;

	for (int i = 1; i < length; i++)
	{
		int t = abs(*(vector + i));

		if (t > max) {
			max = t;
			max_index = i;
		}
	}

	return max_index;
}

int find_first_positive_element_index(int* vector, int length) {
	int index = 0;
	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) > 0) {
			index = i;
			break;
		}
	}

	return index;
}

int find_sum_after_positive_element(int* vector, int length) {
	int sum = 0;
	int index = find_first_positive_element_index(vector, length);
	for (int i = index + 1; i < length; i++)
	{
		sum += *(vector + i);
	}

	return sum;
}