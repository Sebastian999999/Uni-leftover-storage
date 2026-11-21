# include <iostream>
using namespace std;

bool ifPerfect(int);
int main() {
	cout << "Hiyam Rehan, 23I-0039, A, Question #\n" << endl;

	cout << "Perfect numbers from 1 - 1000: " << endl;
	for (int i = 1; i <= 1000; i++) {
		bool x = ifPerfect(i);

		if (x == 1) {
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}

bool ifPerfect(int num) {
	int sum = 0;

	for (int i=1; i < num; i++){
		if (num % i == 0)
		sum = sum + i;
    }
	if (sum == num) {
		return true;
	}
	else {
		return false;
	}
}