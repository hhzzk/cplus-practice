/*************************************************************************
    > File Name: example6-4.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月18日 星期二 10时59分35秒
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

class Namelist
{
    public:
        Namelist() : size( 0 ), p( 0 ) { }
        Namelist( const string [], int );
        Namelist( const Namelist& );

        Namelist& operator=( const Namelist& );
        void set( const string& s, int i ) { p[ i ] = s; }
        void set( const char* s, int i ) { p[i] = s; }
        void dump() const;

    private:
        int size;
        string* p;
        void copyIntoP( const Namelist& );
};

Namelist::Namelist( const string [], int si )
{
    p = new string[ size = si ];
    for ( int i = 0; i < size; i++ )
    {
        p[ i ] = s[ i ];
    }
}

Namelist::Namelist( const Namelist& d) : p(0)
{
    copyIntoP( d );
}

Namelist& 
