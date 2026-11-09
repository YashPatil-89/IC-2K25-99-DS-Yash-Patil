#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, r2, c2, choice;

    do
    {
        cout << endl << endl << "--- MATRIX CALCULATOR ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Multiplication" << endl;
        cout << "3. Transpose" << endl;
        cout << "4. Determinant" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter rows and columns: ";
            cin >> r >> col;

            cout << "Enter first matrix:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    cin >> a[i][j];
            }

            cout << "Enter second matrix:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    cin >> b[i][j];
            }

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    c[i][j] = a[i][j] + b[i][j];
            }

            cout << "Addition:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    cout << c[i][j] << " ";
                cout << endl;
            }
            break;

        case 2:
            cout << "Enter rows and columns of first matrix: ";
            cin >> r >> col;

            cout << "Enter rows and columns of second matrix: ";
            cin >> r2 >> c2;

            if(col != r2)
            {
                cout << "Multiplication not possible" << endl;
                break;
            }

            cout << "Enter first matrix:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    cin >> a[i][j];
            }

            cout << "Enter second matrix:" << endl;
            for(int i = 0; i < r2; i++)
            {
                for(int j = 0; j < c2; j++)
                    cin >> b[i][j];
            }

            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c2; j++)
                {
                    c[i][j] = 0;

                    for(int k = 0; k < col; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }
            }

            cout << "Multiplication:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c2; j++)
                    cout << c[i][j] << " ";
                cout << endl;
            }
            break;

        case 3:
            cout << "Enter rows and columns: ";
            cin >> r >> col;

            cout << "Enter matrix:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                    cin >> a[i][j];
            }

            cout << "Transpose:" << endl;
            for(int j = 0; j < col; j++)
            {
                for(int i = 0; i < r; i++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
            break;

        case 4:
            cout << "Enter order of square matrix (1-3): ";
            cin >> r;

            if(r < 1 || r > 3)
            {
                cout << "Only order 1 to 3 supported" << endl;
                break;
            }

            cout << "Enter matrix:" << endl;
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < r; j++)
                    cin >> a[i][j];
            }

            if(r == 1)
                cout << "Determinant = " << a[0][0] << endl;

            else if(r == 2)
                cout << "Determinant = "
                     << a[0][0] * a[1][1] -
                        a[0][1] * a[1][0] << endl;

            else
            {
                int det =
                    a[0][0] * (a[1][1] * a[2][2] -
                               a[1][2] * a[2][1])
                  - a[0][1] * (a[1][0] * a[2][2] -
                               a[1][2] * a[2][0])
                  + a[0][2] * (a[1][0] * a[2][1] -
                               a[1][1] * a[2][0]);

                cout << "Determinant = " << det << endl;
            }
            break;
        }

    } while(choice != 5);

    return 0;
}
