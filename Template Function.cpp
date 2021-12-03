// Template Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T>
T half(T val) {
    T res;
    res = val / 2;
    if (*typeid(val).name() == 'i') {

        if (res * 2 != val)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    system("Pause");
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
