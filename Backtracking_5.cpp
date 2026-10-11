#include <iostream>

using namespace std;

int CurMoney = 0;
int SoCach = 0;
int X[25] ;
int MaTranChiPhi[25][25];
int N, W;

void Nhap(int &N, int &W)
{
	cin >> N >> W;
	for(int i=0; i<=N; i++)
	{
		for(int j=0; j<=N; j++)
		{
			cin >> MaTranChiPhi[i][j];
		}
	}
}

void Try(int i, int N, int W)
{
	for(int j=1; j<=N; j++)
	{
		X[i] = j;
		CurMoney += MaTranChiPhi[X[i-1]][j];
		if(i == N)
		{
			if(CurMoney <= W)
				SoCach++;
		}
		else 
		{
			if(CurMoney < W)
				Try(i+1, N, W);
		}
		CurMoney = 0;
		SoCach = 0;
	}
}

int main()
{
	Nhap(N, W);
	
	CurMoney = 0;
	SoCach = 0;
	
	Try(1, N, W);
	cout << SoCach;
	
	return 0;
 } 
