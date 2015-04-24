#include <iostream>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
using namespace std;

int main(int argc, char **argv)
{
    char **pp;
    struct in_addr addr;
    struct hostent *hostp;

    if(argc != 2)
    {
        cout << "Need two arguments!!" << endl;
        return 0;
    }

    if(inet_aton(argv[1], &addr) != 0)
        hostp = gethostbyaddr((const char *)&addr, sizeof(addr), AF_INET);
    else
        hostp = gethostbyname(argv[1]);

    cout << "oficial hostname : " << hostp->h_name << endl;

    for(pp = hostp->h_aliases; *pp != NULL; pp++)
        cout << "alias: " << *pp << endl;

    for(pp = hostp->h_addr_list; *pp != NULL; pp++)
    {
        addr.s_addr = ((struct in_addr *)*pp)->s_addr;
        cout << "address:" << inet_ntoa(addr) <<endl;
    }

    return 0;
}
