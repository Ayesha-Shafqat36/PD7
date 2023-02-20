#include <iostream>
using namespace std;
void upperTriangle(int rows);
void lowerTriangle(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    upperTriangle(rows);
    lowerTriangle(rows);
}
void upperTriangle(int rows)
{
    for(int i = 1; i <= rows; i ++)
    {
        for(int space = rows; space>=i; space--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lowerTriangle(int rows)
{
    for(int i = rows; i >= 1; i --)
    {
        for(int space = i; space <=rows; space ++)
        {
            cout << " ";
        }
        for(int j = i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
