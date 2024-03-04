#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int find_max_element_index(int* vector, int length);
int find_negative_product_before_max(int* vector, int length, int max);
int find_positive_sum_before_max(int* vector, int length, int max);

int main() {
	int size = 7;
	int* vector = new int[size];

	random_init(vector, size, -5, 5);
	int max_index = find_max_element_index(vector, size);

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Sum of all positive elements before max element is:\n"
		<< find_positive_sum_before_max(vector, size, max_index) << endl;
	cout << "Product of all negative elements before max element is:\n"
		<< find_negative_product_before_max(vector, size, max_index);

	return 0;
}