/*

1. 25 + 8
2. (-9)+(-4)
3. 65 - 10
4. 50 - 100
5. 5 * 4

*/

#include <iostream>
#include <vector>

typedef std::vector<int> int_vec;

int addition(int& a, int& b) {
	int carry = 0;

	return a + b;
}

int binary_add(int a, int b) {
	int_vec vecA, vecB, tempArr, resultArr;

	while (a > 0) {
		tempArr.push_back(a % 2);
		a /= 2;
	}

	for (int i = tempArr.size() - 1; i >= 0; i--) {
		vecA.push_back(tempArr[i]);
	}

	/*for (int i : vecA) {
		std::cout << i;
	}*/

	//std::cout << "\n";

	tempArr.clear();

	while (b > 0) {
		tempArr.push_back(b % 2);
		b /= 2;
	}

	for (int i = tempArr.size() - 1; i >= 0; i--) {
		vecB.push_back(tempArr[i]);
	}

	/*for (int i : vecB) {
		std::cout << i;
	}*/

	//std::cout << "\n";

	tempArr.clear();

	int x = 0;
	for (int i = 0; i < vecA.size(); i++) {
		
	}

	return a + b;
}

int main() {
	int a, b;

	std::cout << "First number: "; std::cin >> a;
	std::cout << "Second number: "; std::cin >> b;

	std::cout << "Result: " << binary_add(a, b);
}