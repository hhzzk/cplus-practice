/*************************************************************************
    > File Name: p1-1.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月04日 星期二 18时14分27秒
 ************************************************************************/

#include<string>
#include<fstream>
using namespace std;

int main(){
    // Open input and output streams
    const int dInd = 17;
    ifstream in;
    ofstream out;
    string buffer;
    
    in.open( "bets.dat" );
    out.open( "y2kCompliantBets.dat" );
    while( getline(in, buffer ) )
    {
        buffer.insert( dInd, "19" );
        out << buffer << '\n';
    }
    in.close();
    out.close();
    
    return 0;
}
