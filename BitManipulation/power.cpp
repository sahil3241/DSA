#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{

    cout << ispowerof2(16);
    return 0;
}

/*
    Explanation

    (n && !(n & n - 1)) => (8 && !(8 & 8 - 1))

    8 & 7 => 0b1000 & 0b0111 => 0b0000

    !(0b0000) => true


*/