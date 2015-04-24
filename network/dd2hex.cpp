#include <iostream>
#include <arpa/inet.h>
#include <netinet/in.h>
using namespace std;

int main()
{
    struct in_addr inp;
    char cp[20];

    while((cin >> cp) != 0)
    {
        if(inet_aton(cp, &inp))
        {
            cout << hex << htonl(inp.s_addr) << endl;
        }
        else
        {
            cout << "Error!!" << endl;
        }
    }

    return 0;
}
