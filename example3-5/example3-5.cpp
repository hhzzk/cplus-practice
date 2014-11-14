/*************************************************************************
    > File Name: example3-5.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月14日 星期五 19时45分39秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Person
{
    public:
        void setAge( unsigned n );
        unsigned getAge() const;
    private:
        unsigned age;
};

// Define Person's setAge
void Person::setAge(unsigned n )
{
    age = n;
}

// Define Person's getAge
unsigned Person::getAge() const
{
    return age;
}

int main()
{
    Person boxer;
    boxer.setAge(23);
    cout << " Age is " << boxer.getAge() << "\n";
    return 0;
}
