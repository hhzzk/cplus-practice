#include<string>
#include<iostream>
using namespace std;

class Account
{
    public:
        void calculate()
            { amount += amount * interestRate; }
        static double rate()
            { return interestRate; }
        static void rate(double);

    private:
        string owner;
        double amount;
        static double interestRate;
        static double initRate();
};

// 当在类外实现静态函数时,static关键字不能出现
void Account::rate(double newRate)
{
    interestRate = newRate;
}

double Account::interestRate = initRate();

double Account:: initRate()
{
    return 100;
}

int main()
{
    Account wang;
    return 0;
}
