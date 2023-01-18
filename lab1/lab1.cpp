#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <string> 

using namespace std;

mt19937 mersenne{ static_cast<mt19937::result_type>(time(nullptr)) };

int random(int low, int high)
{
	uniform_int_distribution<> die{ low, high };
	int number = 0;
	while (number == 0) {
		number = die(mersenne);
	}
	return number;
}

vector <int> getVector() {
	vector <int> line;
	for (int i = 0; i < random(1000, 10000); i++) {
		line.push_back(random(-3200, 3200));
	}
	line.push_back(0);
	return line;
}

bool func(int element) {
	string el = to_string(abs(element));
	bool res = false;
	if (el.length() % 2 == 0) {
		bool containsThree = false;
		bool symmetry = false;

		for (int i = 0; i < el.length()/2; i++) {
			if (el[i] == '3') {
				containsThree = true;
			}
			
			if (el[i] == el[el.length()/2 + i]) {
				symmetry = true;
			}
			else {
				symmetry = false;
				break;
			}
		}
		res = containsThree && symmetry;
	}
	return res;
}

int main()
{
	vector <int> line = getVector();
	//vector <int> line = {4343,9131,33,3313,646,3223,1313,0};
	long summ = 0;
	for (int i = 0; i != line.size(); ++i) {
		if (func(line[i])) {
			summ += line[i];
		}
	}
	cout << "sum: " << summ;
}