#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    int row, col;
    do
    {
        cout << "Enter the number of rows: ";
        cin >> row;
    } while (row < 1 || row > 100);
    do
    {
        cout << "Enter the number of columns: ";
        cin >> col;
    } while (col < 1 || col > 100);


    int arr[full_col][full_row];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // min & max + sum + avg
    int min = arr[0][0];
    int max = arr[0][0];
    double sum = 0;

    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            sum += arr[i][j];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << sum / (col * row) << endl;
    return 0;
	system("pause");
}