/*************************************************************************
    > File Name: example2-11.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月04日 星期二 19时46分55秒
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i = 91;
    
    cout << "i = " << i << " (decimal) \n ";
    cout << "i = " << oct << i << " (octal)\n ";
    cout << "i = " << hex << i << " (hexadecimal)\n ";
    cout << "i = " <<  i << "\n ";

    for(i = 1; i <= 100000; i *= 10)
    {
        cout << setfill('*');
        cout << dec;
        cout << setw( 6 ) << i << '\n';
    }

    return 0;
}
