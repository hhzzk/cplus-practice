/*************************************************************************
    > File Name: example3-40.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月18日 星期二 20时25分36秒
 ************************************************************************/

#include<iostream>
using namespace std;

class C
{
    public:
        void m();
    private:
        int x;
};

void C::m()
{
    static int s = 0;
    cout << ++s << '\n';
}

int main()
{
    C c1, c2;
    c1.m();
    c2.m();
    c1.m();
    return 0;
}
