#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

#define ENDL cout << endl;

using namespace std;

vector<vector<int>> WriteMatrix(vector<vector<int>>& matrix);
vector<vector<int>> Transpose(const vector<vector<int>>& matrix);
void ShowMatrix(const vector<vector<int>>& matrix);

int main(void) {
	int x, y;

	cin >> x >> y;
	ENDL

	vector<vector<int>> matrix(x, vector<int>(y));

	matrix = WriteMatrix(matrix);

	ENDL

	ShowMatrix(matrix);

	ENDL

	auto result = Transpose(matrix);

	ENDL

	ShowMatrix(result);

	return 0;
}

vector<vector<int>> WriteMatrix(vector<vector<int>>& matrix) {
	for (size_t i = 0; i != matrix.size(); ++i) {
		for (size_t j = 0; j != matrix[0].size(); ++j) {
			cin >> matrix[i][j];
		}

		ENDL
	}

	return matrix;
}
vector<vector<int>> Transpose(const vector<vector<int>>& matrix) {
	vector<vector<int>> matrix1(matrix[0].size());
	
	for (size_t i = 0; i != matrix1.size(); ++i) {
		matrix1[i].resize(matrix.size());

		for (size_t j = 0; j != matrix1[0].size(); ++j) {
			matrix1[i][j] = matrix[j][i];
		}
	}

	return matrix1;
}
void ShowMatrix(const vector<vector<int>>& matrix) {
	for (size_t i = 0; i != matrix.size(); ++i) {
		for (size_t j = 0; j != matrix[0].size(); ++j) {
			cout << matrix[i][j] << "\t";
		}

		ENDL
	}
}