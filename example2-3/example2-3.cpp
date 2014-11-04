/*************************************************************************
    > File Name: example2-3.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月04日 星期二 19时32分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int val; 
    int sum = 0;
    cout << "Enter next number:";
    while( cin >> val )
    {
        sum += val;
        cout << "Enter next number:";
    }
    cout << "Count of all values:" << sum << '\n';

    return 0;
}
