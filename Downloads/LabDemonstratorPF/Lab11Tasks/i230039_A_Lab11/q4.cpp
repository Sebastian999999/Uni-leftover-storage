# include <iostream>
using namespace std;

int qualityPoints(int);

int main() {
	cout << "Hiyam Rehan, 23I-0039, A, Question #4\n" << endl;

	int avg;

	cout << "Enter your average: ";
	cin >> avg;

	if (avg > 100 || avg < 0) {
		do {
			cout << "\nInavlid input, please input a proper average." << endl;
			cout << "Enter your average: ";
			cin >> avg;
		} while (avg > 100 || avg < 0);
	}
	int points = qualityPoints(avg);
	cout << "You have " << points << " quality point(s)." << endl;

	return 0;
}

int qualityPoints(int a) {
	int p;
	if (a >= 90) {
		p = 4;
	}
	else if (a >= 80 && a < 90) {
		p = 3;
	}
	else if (a >= 70 && a < 80) {
		p = 2;
	}
	else if (a >= 60 && a < 70) {
		p = 1;
	}
	else {
		p = 0;
	}
	return p;
}