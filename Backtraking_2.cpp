#include <iostream>
#include <vector>

using namespace std;

int SoCach = 0;
int X[25];
int iTong = 0;

void Nhap(int &n, int &K, int &S, vector<int> &N)
{
	cin >> n >> K >> S;
	N.resize(n+1);
	
	for(int i=1; i<=n; i++)
	{
		cin >> N[i];
	}
}

void Try(int i, int n, int K, int S, const vector<int> &N)
{
	for(int j = X[i-1] + 1; j <= n + K - i; j++)
	{
		X[i] = j;
		iTong = iTong + N[j];
		if(i == K)
		{
			if(iTong == S)
				SoCach++;
		}
		else 
		{
			if(iTong < S)
				Try(i+1, n, K, S, N);
		}
		iTong = iTong - N[j];
	}
}

int main()
{
	int n, K, S;
	vector<int> N;
	
	Nhap(n, K, S, N);
	
	X[0] = 0;
	SoCach = 0;
	iTong = 0;
	
	Try(1, n, K, S, N);
	cout << SoCach;
	return 0;
	
}
