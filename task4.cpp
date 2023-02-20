#include <iostream>
using namespace std;
void amplifier(int num);
main()
{
    int num;
    cout << "Enter number of which you want to create a sequence:";
    cin >> num;
    amplifier(num);
}
void amplifier(int num)
{
    int num_1=0;
    for(int count =1; count <= num; count++)
    {
        if(count %4 ==0)
        {
            num_1 = count * 10;
            cout << num_1 << " ";
        }
        else
        {
            cout << count << " ";
        }
    }
}