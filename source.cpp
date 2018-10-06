#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct func
{
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

int main()
{
	vector<int> vec = { 10, 20, 11, 70, 50, 40, 100, 5 };
	priority_queue<int,vector<int>,func> pq;
	int k = 3;

	int i = 0;

	while (i < k && i<vec.size())
	{
		pq.push(vec[i]);
		i++;
	}
	if (i == k)
		cout << pq.top() << " ";

	while(i < vec.size())
	{
		if (vec[i] > pq.top())
		{
			pq.pop();
			pq.push(vec[i]);
		}
		cout << pq.top() << " ";
		i++;
	}
	return 0;
}
