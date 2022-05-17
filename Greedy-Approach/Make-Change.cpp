
#include <iostream>
#include <vector>
using namespace std;

// Make-Change Problem ( greedy approach ):

int coins[] = { 1, 5, 10, 25, 50, 100 };
int n = sizeof(coins) / sizeof(coins[0]);

void findMin(int V)
{
	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {

		while (V >= coins[i]) {
			V -= coins[i];
			ans.push_back(coins[i]);
		}
	}

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}


int main()
{
	int n = 365;
	cout << "The minimal total number of coins for " << n << " are: ";
	findMin(n);
	return 0;
}
