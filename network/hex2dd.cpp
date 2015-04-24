#include <iostream>
#include <arpa/inet.h>
#include <netinet/in.h>
using namespace std;

int main()
{
    int hexip;
    struct in_addr in;

    while(cin >> hexip)
    {
        in.s_addr = (unsigned int)htonl(hexip);
        cout << inet_ntoa(in) << endl;
    }

    return 0;
}
