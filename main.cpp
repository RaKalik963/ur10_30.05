#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    const int max_row = 100;
    const int max_col = 100;
    int rows, cols, num;

    do {
        cout << "enter the number of rows ";
        cin >> rows;
    } while (rows < 1 || rows > max_row);

    do {
        cout << "enter the number of columns ";
        cin >> cols;
    } while (cols < 1 || cols > max_col);

    cout << "enter the number you want to start with ";
    cin >> num;

    int arr[max_row][max_col];

    int current_value = num;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = current_value;
            current_value += 1;
        }
    }

    cout << "array" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
