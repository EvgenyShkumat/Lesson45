#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int find_abs_max_element_index(int* vector, int length);
int find_first_positive_element_index(int* vector, int length);
int find_sum_after_positive_element(int* vector, int length);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);
	int max_abs_index = find_abs_max_element_index(vector, size);

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Sum of all elements after first positive element:\n"
		<< find_sum_after_positive_element(vector, size) << endl;
	cout << "Max abs element index: " << max_abs_index;

	return 0;
}