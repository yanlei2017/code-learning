#include<iostream>
#include<stdio.h>

#define LENGTH 100
#define INFINITY1 65535
using std::cout;
using std::endl;
using std::cin;


using std::cin;
struct	G {
	int a[LENGTH];
	int b[LENGTH][LENGTH];
	int n, e;
};
void creat(G* G);
void show(G* G);
int main()
{

	struct G* tu = {};
    tu = (struct G*) malloc(sizeof(struct G));
    cout<<tu->a[0]<<endl;
	creat(tu);
	show(tu);
	cout << (tu->b[1][1]);
	return 0;




}
void creat(G* G)
{
	if (G == nullptr)
		cout << "fail";
	int i, j, k, w;
	scanf("%d%d", &G->n, &G->e);
	for (i = 0; i < G->n; i++)
		cin >> G->a[i];
	for (i = 0; i < G->n; i++)
		for (j = 0; j < G->n; j++)
			G->b[i][j] = INFINITY1;
	for (k = 0; k < G->e; k++)
	{
		cin >> i >> j >> w;
		G->b[i][j] = w;
	}
}
void show(G* G)
{
	int i, j;
	for (i = 0; i < G->n; i++)
	{
		for (j = 0; j < G->n; j++)
			cout << (G->b[i][j]) << " ";
		if (!(j % (G->n)))	 cout << endl;
	}
}
