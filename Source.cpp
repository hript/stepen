#include <iostream> 
#include <string>

using namespace std;

int stepen(int num, int step) {
	int ans = num;
	for (int i = 1; i <= step; i++) {
		ans *= num;
	}

	return ans / 10;
}

int main() {
	string num;
	string step;
	string lastUnitsStep;
	cout << "Write number" << endl;
	cin >> num;

	cout << "Write degree of number" << endl;
	cin >> step;


	lastUnitsStep = step[step.size() - 2] + step[step.size() - 1];

	char lastUnitNum = num[step.size() - 1];

	if ((lastUnitsStep - '0') % (lastUnitNum - '0') == 0) {
		cout << stepen(lastUnitNum - '0', 4);
	}
	else {
		cout << stepen(lastUnitNum - '0', lastUnitsStep - '0');
	}

	return 0;
}