/*************************************************************************
    > File Name: example6-1.cpp
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2014年11月18日 星期二 09时40分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Complex
{
    public:
        Complex();
        Complex( double );
        Complex( double, double );
        
        void write() const;
        
        // Operator methods
        Complex operator+( const Complex& ) const;
        Complex operator-( const Complex& ) const;
        Complex operator*( const Complex& ) const;
        Complex operator/( const Complex& ) const;

    private:
        double real;
        double imag;
};

// Default constructor
Complex::Complex()
{
    real = imag = 0.0;
}

// Constructor
Complex::Complex( double re )
{
    real = re;
    imag = 0.0;
}

// Constructor
Complex::Complex( double re, double im )
{
    real = re;
    imag = im;
}

void Complex::write() const
{
    cout << real << "+" << imag << 'i';
}

Complex Complex::operator+( const Complex& u) const
{
    Complex v(real + u.real, imag + u.imag);
    return v;
}

Complex Complex::operator-( const Complex& u) const
{
    Complex v(real - u.real, imag - u.imag);
    return v;
}

Complex Complex::operator*( const Complex& u ) const
{
    Complex v( real * u.real - imag * u.imag,
               imag * u.real + real * u.imag);
    return v;
}

Complex Complex::operator/( const Complex& u ) const
{
    double abs_sq = u.real * u.real + u.imag * u.imag;
    Complex v( ( real * u.real + imag * u.imag ) / abs_sq,
               ( imag * u.real + real * u.imag ) / abs_sq );
    return v;
}

int main()
{
    Complex c1( 7.7, 5.5 );
    Complex c2( 4.2, -8.3);
    Complex c3;
    
    c3 = c1 + c2;
    cout << "c1 + c2 = " ;
    c3.write();
    cout << '\n';

    c3 = c1 - c2;
    cout << "c1 - c2 = " ;
    c3.write();
    cout << '\n';

    c3 = c1 * c2;
    cout << "c1 * c2 = " ;
    c3.write();
    cout << '\n';

    c3 = c1 / c2;
    cout << "c1 / c2 = " ;
    c3.write();
    cout << '\n';
}

