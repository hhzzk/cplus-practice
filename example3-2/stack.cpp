/*************************************************************************
    > File Name: stack.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月14日 星期五 20时28分22秒
 ************************************************************************/

#include "stack.h"

int main()
{
    Stack s1;
    s1.init();
    s1.push(9);
    s1.push(4);
    s1.dump();
    cout << "Poping " << s1.pop() << '\n';
    s1.dump();
    s1.pop();
    s1.pop();

    s1.push(1);
    s1.dump();
    s1.push(2);
    s1.dump();
    s1.push(3);
    s1.dump();
    s1.push(4);
    s1.dump();
    s1.push(5);
    s1.dump();
    s1.push(6);
    s1.dump();

}
