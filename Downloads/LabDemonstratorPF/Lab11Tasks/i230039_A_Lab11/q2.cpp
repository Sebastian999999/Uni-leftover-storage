# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;

bool flip();

int main() {
	cout << "Hiyam Rehan, 23I-0039, A, Question #2\n" << endl;
	int headcount = 0;
	int tailcount = 0;

	srand(time(NULL));

	for (int i = 1; i <= 100; i++) {
		bool x = flip();
		if (x == 0)
			tailcount += 1;
		else if (x == 1)
			headcount += 1;
	}
	
	cout << "Number of heads: " << headcount << endl;
	cout << "Number of tails: " << tailcount << endl;
	return 0;
}

bool flip() {
	int x = rand()%2;

	if (x == 0)
		return 0;
	else
		return 1;

}