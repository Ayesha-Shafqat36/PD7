#include <iostream>
using namespace std;
float calculatePercentage(int number);
main()
{
    int number;
    float result;
    result=calculatePercentage(number);
}
float calculatePercentage(int number)
{
    int num;
    float m_bus=0;
    float truck =0;
    float train =0;
    float sum =0;
    float price =0;
    float avgPrice =0;
    float p_1 =0;
    float p_2 =0;
    float p_3 =0;
    float result =0;
    cout << "Enter count of cargo:";
    cin >> num;
    for(int i=1; i <=num; i++)
    {
        cout << "Enter number of cargo:";
        cin >> number;
        sum = sum + number;
        if(number>=1 && number<=3)
        {
            m_bus= m_bus+number;
        }
        if(number>3 && number<=11)
        {
            truck= truck+number;
        }
        if(number>11)
        {
            train= train+number;
        }
    }
    p_1 =(m_bus/sum)*100;
    p_2 =(truck/sum)*100;
    p_3 =(train/sum)*100;

    price =(m_bus *200) + (truck *175) + (train *120);
    avgPrice= price /sum;

    cout << "Average price is:"<< avgPrice << endl;
    cout << "Percentage of cargo by minibus is : "<< p_1<< "%" << endl;
    cout << "Percentage of cargo by truck is : "<< p_2 << "%" << endl;
    cout << "Percentage of cargo by train is : "<< p_3 << "%" << endl;
    return result;
}