/*************************************************************************
    > File Name: test.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月20日 星期四 20时53分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Foo
{
    public:
        explicit Foo( int arg )
        {
        
        }
};

void g( Foo f )
{

}

int main()
{
    Foo f1(1);
    g(f1);
    g( 999 );
    
    return 0;
}
