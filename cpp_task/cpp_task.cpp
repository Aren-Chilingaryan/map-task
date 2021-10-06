#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	const int size = 10;
	string* array = new string[size]{ "bmw","mercedes","opel","volvo","lambo","fera", "fera","gelik", "bmw","opel" };
	map<string, int> cars;
	int count = 1;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] == array[j]) {
				count++;
			}
		}
		if (cars.count(array[i]) == 0) {
			cars.insert(pair<string, int>(array[i], count));
		}
		count = 1;
	}
	map<string, int>::iterator iter;
	for (iter = cars.begin(); iter != cars.end(); iter++) {
		cout << iter->first << " = " << iter->second << endl;
	}
}
