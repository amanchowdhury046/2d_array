#include<iostream>
using namespace std;

int main(){

    int a[100][100] = {0};
    int m, n;
    cin >> m >> n;

    //Iterate Over the array
    int val = 1;

    for (int row = 0; row <= m - 1; row++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            a[row][col] = val;
            val = val + 1;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    //Wave Print 
    // Instead of row wise we have to traverse column wise
    for (int col = 0; col < n; col++)
    {

        if (col % 2 == 0)
        {
            //Even Col - Top Down Direction
            for (int row = 0; row < m; row++)
            {
                cout << a[row][col] << " ";
            }
        }
        else
        {
            //Odd Col - Bottom Up Direction
            for (int row = m - 1; row >= 0; row--)
            {
                cout << a[row][col] << " ";
            }
        }
    }

    return 0;
}
