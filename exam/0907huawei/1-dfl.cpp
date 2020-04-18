
	#include <bits/stdc++.h>
using namespace std;
int a[105];
int n;/*数组长度*/
struct node
{
	int pos, val;
};
int bfs(int x)/*宽度优先搜索*/
{
	queue<node> q;
	node start;
	start.pos = x;
	start.val = 0;
	q.push(start);
	if (start.pos == n - 1)/*特殊输入*/
	{
		return 0;
	}
	q.pop();
	for (int t = 2; t < x + (n - 1) / 2; t++) /*每次只能走len/2的长度*/
	{
		node nxt;
		nxt.pos = t;
		nxt.val = 1;
		q.push(nxt);
	}
	int minn = 9999999;
	while (!q.empty())
	{
		node now = q.front();
		q.pop();
		int pp = now.pos;
		int ans = 1;
		while (pp < n - 1)
		{
			pp = pp + a[pp];
			ans++;
		}
		if (pp == n - 1)
		{
			minn = min(minn, ans);
		}
	}
	return minn;
}
int main()
{
	n = 1;
	while (~scanf("%d", &a[n]))
	{
		n++;
	}
	int xx = bfs(1);
	if (xx == 9999999)
	{
		puts("-1");
	}
	else
	{
		printf("%d", xx);
	}
	return 0;
}
