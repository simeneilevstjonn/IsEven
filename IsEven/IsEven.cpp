// IsEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Modulo
bool isEvenModulo(int n) 
{
    return n % 2 == 0;
}

// Bit shift
bool isEvenBitShift(int n) 
{
    return (n >> 1) << 1 == n;
}

// Char
bool isEvenChar(int n) 
{
    string num = to_string(n);
    char back = num.back();

    return back == '0' || back == '2' || back == '4' || back == '6' || back == '8';
}

// Bitwise and
bool isEvenAnd(int n) 
{
    return !(n & 1);
}

// Division
bool isEvenDivision(int n) 
{
    return (n / 2) * 2 == n;
}

// For loop
bool isEvenForLoop(int n) 
{
    unsigned int num = abs(n);
    bool isEven = true;

    for (unsigned int i = 0; i < num; i++) 
    {
        isEven = !isEven;
    }

    return isEven;
}


int main()
{
    // Who needs unit tests, anyway?
    std::cout << isEvenModulo(17) << isEvenBitShift(17) << isEvenChar(17) << isEvenAnd(17) << isEvenForLoop(17) << endl;
    std::cout << isEvenModulo(172) << isEvenBitShift(172) << isEvenChar(172) << isEvenAnd(172) << isEvenForLoop(172) << endl;
    std::cout << isEvenModulo(-17) << isEvenBitShift(-17) << isEvenChar(-17) << isEvenAnd(-17) << isEvenForLoop(-17) << endl;
    std::cout << isEvenModulo(-172) << isEvenBitShift(-172) << isEvenChar(-172) << isEvenAnd(-172) << isEvenForLoop(-172) << endl;

}
