#include<iostream>
using namespace std;

int main()
{
	int len;
	cin >> len;

	int result = 1, sum = 1;
	int next, n;
	cin >> n;
	for (int i = 1; i < len; i++)
	{
		cin >> next;
		if (next >= n)
		{
			sum++;
			if (sum > result) result = sum;
		}
		else sum = 1;
		n = next;
	}
	cout << result;
}