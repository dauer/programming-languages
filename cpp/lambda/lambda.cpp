#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int  i         = 0;
    char s[]       = "Hello World!";
    int  Uppercase = 0; //modified by the lambda

    for_each(s, s+sizeof(s), [&Uppercase] (char c)->void {
        if (isupper(c))
            Uppercase++;
    });

    // Lambda function with local variable Uppercase and return of int value
    i = []()->int { int Uppercase = 8; cout << "Hello " << Uppercase << endl; return 5; }();
    cout << "I: " << i << endl;

    cout << Uppercase << " uppercase letters in: " << s <<endl;
}
