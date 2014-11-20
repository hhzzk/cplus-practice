/*************************************************************************
    > File Name: test.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月20日 星期四 19时28分04秒
 ************************************************************************/

#include<iostream>
using namespace std;

class C
{
    public:
        C() { p = new int; }
        void set( int a ) { *p = a; }
        int get() const { return *p; }
    private:
        int *p;
};

int main()
{
    C c1, c2;
    c1.set( 1 );
    cout << c1.get() << endl;
    c2 = c1;
    c2.set( -999 );
    cout << c1.get() << endl;
    
    return 0;
}
