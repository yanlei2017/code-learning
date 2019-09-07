#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>vec;
	int a;
	while (cin >> a)
		vec.push_back(a);
	int size = vec.size();
	int length = size / 2;
	vector<int>number;
	for (int i = 1; i < length; ++i)
	{
		int count = 1;
		int sum=i;
		while (sum < vec.size())
		{
			sum += vec[i];
			count++;
			number.push_back(count);
		}
	}
	sort(number.begin(), number.end());
	
	cout<< number[0];
	return 0;
}