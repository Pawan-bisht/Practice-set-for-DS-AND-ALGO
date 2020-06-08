#include <iostream>
using namespace std;
void spiralPrint(int arr[][1000], int rows, int cols)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = rows - 1;
    int endCol = cols - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        for (int i = startCol; i < endCol; i++)
            cout << arr[startRow][i] << " ";
        startRow++;

        for (int i = startRow; i < endRow; i++)
            cout << arr[i][endCol] << " ";
        endCol--;

        if (endRow > startRow)
        {
            for (int i = endCol; i >= startCol; i--)
                cout << arr[endRow][i] << " ";
            endRow--;
        }

        if (endCol > startCol)
        {
            for (int i = endRow; i >= startRow; i--)
                cout << arr[i][startCol] << " ";
            startCol++;
        }
    }
}
int main()
{
    int rows, cols;
    cout << "Enter the number of rows and cols" << endl;
    cin >> rows >> cols;
    int arr[1000][1000];
    int val = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }

    spiralPrint(arr, rows, cols);
    return 0;
}