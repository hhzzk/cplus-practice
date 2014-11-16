/*************************************************************************
    > File Name: example5-13.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月16日 星期日 21时25分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

class B
{
    public:
        void m() { cout << "B::m()" << endl; }
};

class D : public B
{
    public:
        void m() { cout << "D::m()" << endl; }
};

int main()
{
    D* p;
    p = new D;
    p->m();
    return 0;
}

