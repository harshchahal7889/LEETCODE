#include <bits/stdc++.h>
using namespace std;
int main()
{
    class Solution
    {
    public:
        vector<int> spiralOrder(vector<vector<int>> &matrix)
        {
            int rows, cols;
            cin >> rows >> cols;

            vector<vector<int>> matrixs(rows, vector<int>(cols));

            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    cin >> matrix[i][j];

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                    cout << matrix[i][j] << " ";
                cout << "\n";
            }
        }
    };
}