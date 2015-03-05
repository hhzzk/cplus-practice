/*************************************************************************
    > File Name: 3_16.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2015年03月05日 星期四 12时51分56秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1: " << v1.size() << endl;
    cout << "v2: " << v2.size() << endl;
    cout << "v3: " << v3.size() << endl;
    cout << "v4: " << v4.size() << endl;
    cout << "v5: " << v5.size() << endl;
    cout << "v6: " << v6.size() << endl;
    cout << "v7: " << v7.size() << endl;

    for(auto &i : v2)
        cout << i << " ";
    cout << endl;

    for(auto &i : v7)
        cout << i << " ";
    cout << endl;
    return 0;
}
