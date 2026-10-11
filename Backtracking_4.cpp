#include <iostream>

using namespace std;

int X[25];
int N, M, K;
int DemNu = 0;
int SoCach = 0;

void Nhap(int &N, int &M, int &K)
{
	cin >> N >> M >> K;
}

void Try(int i)
{
	for(int j=X[i-1] + 1; j<=M+N-K+i; j++)
	{
		X[i] = j;
		if(j >= N+1 && j<= M+N)
			DemNu++;
		if(i == K)
		{
			if(DemNu>=1)
				SoCach++;
		}
		else 
			Try(i+1);
	}
}

int main(){
	Nhap(N, M, K);
	
	X[0] = 0;
	SoCach = 0;
	DemNu = 0;
	
	Try(1);
	cout << SoCach;
	
	return 0;
}
