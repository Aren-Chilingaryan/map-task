#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	string array[6] = { "mercedes","opel","volvo","lambo","fera","gelik" };
	map<string, int> cars;

	for (int i = 0; i < 6; i++) {
		cars.insert(pair<string, int>(array[i], rand() % 10));
	}
	map<string, int>::iterator iter;
	for (iter = cars.begin(); iter != cars.end(); iter++) {
		cout << iter->first << " = " << iter->second << endl;
	}
}