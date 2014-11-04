/*************************************************************************
    > File Name: example2-1.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月04日 星期二 20时13分37秒
 ************************************************************************/

// This program repeatedly reads an income from
// the file income.in until end-of file. Income
// under 6000 greenbacks is taxed at 30 percent,
// and income greeted or equal to 60000
// greenbacks in taxed at 60 percent. After
// reading each income, the program prints the
// income and tax.

#include<iostream>
#include<fstream>
using namespace std;

const int cutoff = 6000;
const float rate1 = 0.3;
const float rate2 = 0.6;

int main()
{
    ifstream infile;
    ofstream outfile;
    int income, itax;

    infile.open( "income.in" );
    outfile.open( "tax.out" );

    while ( infile >> income)
    {
        if( income < cutoff )
        {
            itax = income * rate1;
        }
        else
        {
            itax = income * rate2;
        }
        outfile << "Income = " << income << "; tax = " << itax << '\n';
    }

    infile.close();
    outfile.close();

    return 0;
}

