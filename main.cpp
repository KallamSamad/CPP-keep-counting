#include <iostream>
#include <random>
using namespace std;

int main()
{
	int ans{ 0 };
	int count{ 0 };
	const int MIN_VALUE{ 1 };
	const int MAX_VALUE  { 10 };
	string oper = "+";
	int value1 = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));
	int value2 = MIN_VALUE + (rand() % (MAX_VALUE - MIN_VALUE + 1));
	srand(time(nullptr)); // seeding the number generator - ONLY CALLA ONCE

 

	for (int x{ 0 }; x < 9; x++) {
		
		int userAns;
		 
		
		
		if (rand() < (RAND_MAX / 2)) {
			ans = value1 + value2;
			oper = "+";
		}
		else {
			ans = value1 - value2;
			oper = "-";
		}
		cout << value1 <<" "<<oper << value2 << " = " << endl;
		cin >> userAns;
		if (userAns!=ans) {
			cout << "INCORRECT: ANSWER IS "<<ans<<endl;
		}
		else {
			count++;

		}
		value1 = ans;
		
	}
	return 0;
}