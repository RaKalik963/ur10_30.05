#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int FULL_SIZE = 100;
    int row, col;
    do
    {
        cout << "Enter the number of rows: ";
        cin >> row;
    } while (row < 1 || row > FULL_SIZE);

    do
    {
        cout << "Enter the number of columns: ";
        cin >> col;
    } while (col < 1 || col > FULL_SIZE);

    int arr[FULL_SIZE][FULL_SIZE];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    int sum_row[FULL_SIZE] = { 0 };
    int sum_col[FULL_SIZE] = { 0 };
    int sum = 0;

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            sum_row[i] += arr[i][j];
            sum_col[j] += arr[i][j];
            sum += arr[i][j];
        }
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << "| " << sum_row[i] << endl;
    }

    for (size_t j = 0; j < col; j++)
    {
        cout << "-----";
    }
    cout << endl;

    for (size_t j = 0; j < col; j++)
    {
        cout << sum_col[j] << "  ";
    }
    cout << "| " << sum << endl;

    return 0;
    system("pause");
}