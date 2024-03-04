#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);


int find_negative_product_before_max(int* vector, int length);
int find_positive_sum_before_max(int* vector, int length);

int main() {
	int size = 7;
	int* vector = new int[size];

	random_init(vector, size, -5, 5);

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Sum of all positive elements before max element is:\n"
		<< find_positive_sum_before_max(vector, size) << endl;
	cout << "Product of all negative elements before max element is:\n"
		<< find_negative_product_before_max(vector, size);

	return 0;
}