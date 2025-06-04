#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(void)
{
	int N, M;
	cin >> N >> M;

	vector<vector<char>> board(N, vector<char>(M));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
		}
	}

	char pattern1[2] = { 'B','W' };
	char pattern2[3] = { 'W','B' };


	int Min = 1000000000;
	for (int i = 0; i <= N-8; i++)
	{
		for (int j = 0; j <= M-8; j++)
		{
			int count1 = 0;
			int count2 = 0;

			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if(board[i+k][j+l] != pattern1[(k+l)%2])
						count1++;
					if (board[i + k][j + l] != pattern2[(k + l) % 2])
						count2++;
				}
			}
			int mmin = min(count1, count2);
			Min = min(Min, mmin);
		}
	}

	cout << Min;

	return 0;
}