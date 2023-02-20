#include <iostream>
using namespace std;
int p_Report(int num);
main()
{
    int num;
    int result;
    result =p_Report(num);

}
int p_Report(int num)
{
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4 =0;

    int treated=0;
    int treated1=0;
    int total_treated=0;
    int total_treated_1=0;
    int total_treated_2=0;
    int untreated=0;
    float untreated1=0;
    int total_untreated=0;
    int total_untreated_1=0;
    int total_untreated_2=0;
    
    int  result;
    int days;
    cout << "Enter number of days:";
    cin >> days;
    for(int i =1; i <=days; i++)
    {
        cout << "Enter number of patients :";
        cin >> num;
        if(i<=2)
        {
            if(num<=7)
            {
                treated=num;
                sum1=treated+sum1;
            }
            if(num>7)
            {
                untreated= num-7;
                total_untreated_1=untreated +total_untreated_1;
                treated=7;
                sum2=treated+sum2;
            }
            total_treated_1= sum1+sum2;
        }
        else
        {
            if(untreated > treated)
            {
                if(num<=8)
                {
                    treated1=num;
                    sum3 =treated1+sum3;
                
                }
                if(num>8)
                {
                    untreated1=num-8;
                    total_untreated_2=untreated1 +total_untreated_2;
                    treated1=8;
                    sum4 =treated1+sum4;
                }
                total_treated_2=sum3 +sum4;
            }
            else
            {
                if(num<=7)
                {
                    sum3=num;
                }
                else
                {
                    untreated1=num-7;
                    total_untreated_2=untreated1+total_untreated_2;
                    treated1=7;
                    sum4=treated1+sum4;
                }
                total_treated_2=sum3+sum4;
            }
        }
        total_treated = total_treated_1+total_treated_2;
        total_untreated =total_untreated_1+ total_untreated_2;
    }
    
    cout <<"Total Treated patients are:" << total_treated << endl;
    cout << "Total Untreated patients are:" << total_untreated << endl;
    return result;
}