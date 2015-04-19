#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string ifile = "buffer.cpp";
    ifstream in(ifile);
    ofstream out;
    out.open(ifile + ".copy");
    if(out)
        cout << "open file " + ifile + ".copy succesfully." << endl;
    else
        cout << "open file fail " << endl;

    out.close();

    out.open(ifile + ".copy");
    if(out)
        cout << "open file " + ifile + ".copy succesfully." << endl;
    else
        cout << "open file fail " << endl;
    return 0;
}
