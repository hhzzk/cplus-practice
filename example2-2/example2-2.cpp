/*************************************************************************
    > File Name: example2-2.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月04日 星期二 20时38分44秒
 ************************************************************************/

#include<iostream>
using namespace std;

const int* find( int val, const int* t, int n );

int main()
{
    int a[ ] = {2, 4, 6};
    int *ptr;

    ptr = const_cast<int*>(find(4, a, 3));
    if( ptr == 0 )
        cout << "not found\n"
    else
        cout << "fount; value"
}

const int* find( int val, const int* t, int n )
{
    int i;
    for ( i= 0; i < n; i++)
    {
        if ( t[i] == val )
            return &a[i];
    }

    return 0;
}
