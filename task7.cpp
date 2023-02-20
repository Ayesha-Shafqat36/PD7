#include <iostream>
using namespace std;
float totalPercentage(int number);
main()
{
    int number;
    float result;
    result=totalPercentage(number);
}
float totalPercentage(int number)
{
    int num;
    float p_1 =0;
    float p_2 =0;
    float p_3 =0;
    float percent1 =0;
    float percent2 =0;
    float percent3 =0;
    float result =0;
    cout << "Enter any number:";
    cin >> num;
    for(int i =1; i <=num; i++)
    {
        cout << "Enter number:";
        cin >> number;
        if(number %2 == 0)
        {
            p_1= p_1+1;
        }
        if(number %3 == 0)
        {
            p_2= p_2+1;
        }
        if(number %4 == 0)
        {
            p_3= p_3+1;
        }
    }
    percent1 = (p_1/num) *100;
    percent2 = (p_2/num) *100;
    percent3 = (p_3/num) *100;

    cout << "Percent no 1:" << percent1 << "%" << endl;
    cout << "Percent no 2:" << percent2 << "%" << endl;
    cout << "Percent no 3:" << percent3 << "%" << endl;
    return result;
}