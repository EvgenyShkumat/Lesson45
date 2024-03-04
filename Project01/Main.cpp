#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int find_min_index(int* vector, int length);
int find_product_before_min(int* vector, int length, int min_index);
int find_sum_before_min(int* vector, int length, int min_index);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);
	int min_index = find_min_index(vector, size);


	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "Sum of all elements before min element:\n"
		<< find_sum_before_min(vector, size, min_index) << endl;
	cout << "Product of all positive elements before min element is:\n"
		<< find_product_before_min(vector, size, min_index);

	return 0; 
}