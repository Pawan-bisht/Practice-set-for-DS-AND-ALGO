#include <iostream>
using namespace std;

void printImage(int arr[][400], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
                break;
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < cols; i++) //for Anti-clockwise 90 degree rotation
    {
        for (int start = 0, end = rows - 1; start < end; start++, end--)
        {
            int temp = arr[start][i];
            arr[start][i] = arr[end][i];
            arr[end][i] = temp;
        }
    }

    for (int i = 0; i < rows; i++) //for clockwise 90 degree rotation
    {
        for (int start = 0, end = cols - 1; start < end; start++, end--)
        {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows, cols;

    cout << "Enter the number of rows and cols";
    cin >> rows;
    cin >> cols;
    int arr[400][400];
    int val = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }
    printImage(arr, rows, cols);
    return 0;
}