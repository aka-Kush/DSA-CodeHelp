//* Common Header files
#include <iostream>
using namespace std;

//* First program - Print
int main() { cout << "Namaste Dunia!" << endl; };

//* data types
int main()
{
    int a = 123;
    cout << "a = " << a << ". Size of a = " << sizeof(a) << endl;
    char b = 'b';
    cout << "b = " << b << ". Size of b = " << sizeof(b) << endl;
    float f = 1.2;
    cout << "f = " << f << ". Size of f = " << sizeof(f) << endl;
    double d = 1.23;
    cout << "d = " << d << ". Size of d = " << sizeof(d) << endl;
};

//* type-casting
int main()
{
    int a = 'a';
    char ch = 98;      // ascii value for b
    char ch1 = 123456; // 4byes int type casting to 1bit char type ; 123456 is converted to 64 (last 4 bit) and @ is printed
    cout << a << " , " << ch << " , " << ch1 << endl;
};

//* unsigned int -> Positive range only
int main()
{
    unsigned int a = 112;
    cout << a << endl;
    unsigned int b = -112; // error unsigned only stored positive number
    cout << b << endl;     // random huge number is printed because most significant bit is 1 but unsigned only stores positive i.e. MSB = 0
};

//* division
int main()
{
    int a = 2 / 5; // int / int gives int as answer therefore floating point value is ignored and 0 is printed
    cout << a << endl;
    float b = 2.0 / 5; // we can use float / int as it gives float as answer ans 0.4 is printed
    cout << b << endl;
};

//* relational operators
int main()
{
    int a = 2;
    int b = 3;
    bool isEqual = (a == b);
    cout << isEqual << endl;
    bool isGreater = (a > b);
    cout << isGreater << endl;
    bool isSmaller = (a < b);
    cout << isSmaller << endl;
    bool isGreaterEqual = (a >= b);
    cout << isGreaterEqual << endl;
    bool isSmallerEqual = (a <= b);
    cout << isSmallerEqual << endl;
    bool isNotEqual = (a != b);
    cout << isNotEqual << endl;
};

//* logical operator
int main()
{
    int a = 123; // not operator
    cout << !a << endl;
    // other logical op => '&&' '||'
};

//* conditionals
//* if - else
int main()
{
    int a, b;
    cin >> a >> b; // we can use space, enter, tab to enter both values ; cin ignores any space ; we can use cin.get() to accept white space
    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is not greater than b" << endl;
    }
};

//* if - else if - else
int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;
    if (a > 0)
    {
        cout << "a is +ve" << endl;
    }
    else if (a < 0)
    {
        cout << "a is -ve" << endl;
    }
    else
    {
        cout << "a is 0" << endl;
    }
};

int main()
{
    char ch;
    cout << "Enter value of ch: ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "ch is Uppercase Letter" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "ch is Lowercase Letter" << endl;
    }
    else
    {
        cout << "ch is not a Letter" << endl;
    }
};

//* loops
//* while loop

//* print 1 to n
int main()
{
    int n = 5;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
};

//* add till n
int main()
{
    int n = 5, sum = 0, i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl; // 15
};

//* check prime
int main()
{
    int n;
    cout << "Enter value to check : ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i++;
    };
};