#include <iostream>
using namespace std;
int shape(int number);
main()
{
    int number;
    int dots;
    cout << "Enter numbers of Triangle:";
    cin >> number;
    dots = shape(number);
    cout << "Number of dots in Triangle is:"<< dots << endl;
}
int shape(int number)
{
    int dots =0;
    for(int count = 1; count <= number; count++)
    {
        dots =dots + count;
    }
    return dots;
}