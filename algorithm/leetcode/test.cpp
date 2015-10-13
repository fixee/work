#include<iostream>

using namespace std;

void _swap( int &a, int &b )
{
    //a^=b^=a^=b;
}

int main( int argc, char **argv )
{
    int a = 10, b = 9;
    _swap( a, b );
    cout << a << "," << b << endl;

    a = 8;
    b = 8;
    _swap( a, b );
    cout << a << "," << b << endl;
}
