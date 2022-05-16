/*(Diamond-Printing Program) Write an application that prints the following diamond shape.
You may use output statements that print a single asterisk ( * ), a single space or a
single new-line character. Maximize your use of iteration (with nested for statements), 
and minimize the number of output statements.(c++ how to program)*/

#include <iostream>
using namespace std;

int main()
{

    for (int x(10); x >= 1; x--)
    {

        for (int y(x); y > 1; y -= 2)
        {
            cout << " ";
        }

        for (int z(10); z > x; z--)
        {
            if (x % 2 == 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int x(10); x > 1; x--)
    {
        for (int y(10); y > x; y -= 2)
        {
            cout << " ";
        }
        for (int z(x - 1); z > 1; z--)
        {
            if (x % 2 == 1)
            {
                cout << "*";
            }
        }

        cout << "\n";
    }
}