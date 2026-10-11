#include <iostream>

using namespace std;

int M, N;
int Matrix[25][25];
int SoCach = 0;

void Try(int i, int j)
{
	// 1. Nhánh c?n: N?u ði ra ngoài b?n ð? HO?C ð?ng v?t c?n th? quay lui ngay
	if(i > M || j > N || Matrix[i][j] == 1)
	{
		return;
	}
	
	// 2. N?u ð? t?i ðý?c ðích
	if(i == M && j == N)
	{
		SoCach++;
		return;
	}
	
	// 3. T? ô (i, j) hi?n t?i, th? r? 2 hý?ng
	Try(i + 1, j); // Th? ði xu?ng dý?i
	Try(i, j + 1); // Th? ði sang ph?i
    
    // (Không c?n m?ng used, c?ng không c?n ph?c h?i tr?ng thái v? ta truy?n tr?c ti?p t?a ð? m?i vào hàm)
}

int main()
{
	cin >> M >> N;
	
	// Kh?i t?o m?ng t?nh thay v? vector ð? code ng?n hõn
	for(int i = 1; i <= M; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			cin >> Matrix[i][j];
		}
	}
	
	SoCach = 0;
    
	Try(1, 1); // Xu?t phát t? góc trên cùng bên trái
	
	cout << SoCach;
	
	return 0;
}
