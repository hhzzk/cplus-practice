/*************************************************************************
    > File Name: stack.h
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月14日 星期五 20时06分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Stack
{
    public:
        enum { MaxStack = 5 };

        void init() { top = -1; }
        
        void push( int n )
        {
            if( isFull() )
            {
                errMsg( "Full stack. Can't push.'" );
                return;
            }
            arr[++top] = n;
        }
        
        int pop()
        {
            if( isEmpty() )
            {
                errMsg( "Empty stack. Poping dummy value." );
                return dummy_val;
            }
            return arr[top--];
        }

        bool isEmpty() { return top < 0; }
        bool isFull() { return top >= MaxStack -1; }
        void dump()
        {
            cout << "Stack contents, top to bottom:\n";
            for ( int i = top; i >= 0; i-- )
            {
                cout << '\t' << arr[i] << '\n';
            }
        }
        
    private:
        void errMsg( const char* msg ) const
        {
            cerr << "\n*** Stack operation failure: " << msg << '\n';
        }
        int top;
        int arr[MaxStack];
        int dummy_val;
};
