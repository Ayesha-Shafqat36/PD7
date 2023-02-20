#include <iostream>
using namespace std;
void printShape(int row);
main()
{
    int row;
    cout << "Enter number of rows:";
    cin >> row;
    printShape(row);

}
void printShape(int row)
{
    for(int i = row; i >= 1; i--)
    {
        for(int j=i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}