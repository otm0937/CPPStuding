#include <iostream>

void change(int i, int* j);

int main() {
	int i = 0;
	int* j = &i;
	std::cout << *j;
	change(i, j);
	return 0;
}

void change(int i, int* j) {

}