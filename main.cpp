#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    const int row1 = 5, col1 = 10;
    int arr1[row1][col1];

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            arr1[i][j] = rand() % 50; 
        }
    }
    const int row2 = 5, col2 = 5;
    int arr2[row2][col2];

    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            arr1[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
        }
    }
    for (size_t i = 0; i < col1; i++)
    {
        for (size_t j = 0; j < row1; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    for (size_t i = 0; i < col2; i++)
    {
        for (size_t j = 0; j < row2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
	system("pause");
}