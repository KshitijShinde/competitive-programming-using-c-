#include <iostream>
#define M 4
#define N 4
using namespace std;
void print(int mat[M][N])
{

	for (int i = 0; i < M; i++) {

		if (i % 2 == 0) {
			for (int j = 0; j < N; j++)
				cout << mat[i][j] << " ";

		}
		else {
			for (int j = N - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
	}
}
int main()
{
	int mat[M][N] = { {10, 20, 30, 40},
		{50, 60, 70, 80},
		{27, 29, 37, 48},
		{32, 33, 39, 50}
	};
	print(mat);
	return 0;
}