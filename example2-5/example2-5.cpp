/*************************************************************************
    > File Name: example2-5.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月14日 星期五 15时02分47秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct Elephant {
    string name;
    Elephant* next;
};

void print_elephants( const Elephant* ptr );
Elephant* get_elephants();
void free_list( const Elephant* ptr);

int main()
{
    Elephant* start;
    start = get_elephants();
    print_elephants( start );
    free_list( start );
    return 0;
}

// get_elephants dynamically allocates storage for nodes.
Elephant* get_elephants()
{
    Elephant *current, *first;
    int response;
    // Allocate first node
    current = first = new Elephant;
    // Store name of first node
    cout << "\nNAME: ";
    cin >> current -> name;
    // Prompt user another Elephant
    cout << "\nAdd another?(1 == yes, 0 == no): ";
    cin >> response;
    // Add Elephants to list until user signals halt
    while( 1 == response )
    {
        current = current -> next = new Elephant;
        // Store name of first node
        cout << "\nNAME: ";
        cin >> current -> name;
        // Prompt user another Elephant
        cout << "\nAdd another?(1 == yes, 0 == no): ";
        cin >> response;       
    }
    current -> next = 0;
    return first;
}

// print_elephants steps through the linked list pointed to 
// by ptr and print the name member in each node as well as
// the position of the node in the list
void print_elephants( const Elephant* ptr )
{
    int count = 0;
    while(ptr != 0)
    {
        cout << "Elephant number " << count++
             << " is " << ptr->name << "\n";
        ptr = ptr -> next;
    }
}

void free_list( const Elephant* ptr )
{
    const Elephant* temp_ptr;
    while( ptr != 0 )
    {
        temp_ptr = ptr;
        ptr = ptr -> next;
        delete temp_ptr;
    }
}
