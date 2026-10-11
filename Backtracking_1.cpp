#include <iostream>

using namespace std;

int N, M;
bool MauThuan[25][25];
int X[25];
bool used[25];
int SoCach = 0; 

void Try(int i)
{
	for(int j=1; j<=N; j++)
	{
		if(MauThuan[X[i-1]][j]  == false && used[j] == false)
		{
			X[i] = j;
			used[j] = true;
			if(i==N)
				SoCach++;
			else 
				Try(i+1);
			used[j] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	for(int i=0; i<M; i++)
	{
		int u, v;
		cin >> u >> v;
		MauThuan[u][v] = true;
		MauThuan[v][u] = true;
	}
	
	X[0] = 0;
	SoCach=0;
	Try(1);
	
	cout << SoCach;
	
	return 0;
}
