#include <iostream>
using namespace std;
void invertedTriangle(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    invertedTriangle(rows);
    
}
void invertedTriangle(int rows)
{
    for(int i= 1; i<=rows; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout << "*";
        }
        for(int spaces=rows; spaces>=i; spaces--)
        { 
        cout << " ";
        }
        for(int spaces=rows; spaces>=i; spaces--)
        { 
        cout << " ";
        } 
        for(int j= 1; j<=i; j++)
        {
        cout << "*";
        }
        
    cout << endl;
   }
}
