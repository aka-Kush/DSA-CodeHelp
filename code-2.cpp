//* Common Header files
#include <iostream>
using namespace std;

//* patterns

/*
 ****
 ****
 ****
 ****
 */
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n) // while loop that goes from row 1 to row n
    {
        int j = 1;
        while (j <= n) // print asterics till n for row 1
        {
            cout << "*";
            j++; // increment value of j to print next asterics for row 1
        }
        cout << endl; // add next row to next line
        i++;          // increase row number
    };
};

/*
   111
   222
   333
 */
int main()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j += 1;
        }
        i += 1;
        cout << endl;
    };
};

/*
    3 2 1
    3 2 1
    3 2 1
    3 2 1
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            int calc = (n - j) + 1;
            cout << calc;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1 2 3
    4 5 6
    7 8 9
*/
int main()
{
    int n, count = 1;
    cout << "Enter value for n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
 *
 * *
 * * *
 * * * *
 */
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1
    2 2
    3 3 3
    4 4 4 4
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
int main()
{
    int n, count = 1;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1
    2 3
    3 4 5
    4 5 6 7
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // int value = i;
        while (j <= i)
        {
            // cout << value << " ";
            // value--;
            cout << (i - j) + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A A A
    B B B
    C C C
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    // int value = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // cout << char(value) << " ";
            cout << char{'A' + (i - 1)} << " ";
            j++;
        }
        cout << endl;
        // value++;
        i++;
    };
};

/*
    A B C
    A B C
    A B C
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char{'A' + (j - 1)} << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A B C
    D E F
    G H I
*/
int main()
{
    char value = 'A';
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A B C
    B C D
    C D E
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // for i = 1 and j = 1, our formula comes out to be:
            // i + j - 1 = 1
            // now in order to map this value 1 to 'A', we'll add ('A' - 1) both sides
            // therefore: i + j - 1 + 'A' - 1 = 1 + 'A' - 1 => 'A' + i + j - 2 = 'A'
            // formula => 'A' + i + j - 2
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

// alternative => by finding formula for First character and then increment it by 1
// formula for first character => 'A' + i - 1
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A
    B B
    C C C
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A
    B C
    D E F
    G H I F
*/
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    A
    B C
    C D E
    D E F G
*/
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(ch + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    D
    C D
    B C D
    A B C D
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    };
};

/*
    _ _ _ *
    _ _ * *
    _ * * *
    * * * *
*/
// note '_' denotes empty space
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        };
        cout << endl;
        i++;
    };
};

/*
 * * * *
 * * *
 * *
 *
 */
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        };
        cout << endl;
        i--;
    };
};

/*
 * * * *
 _ * * *
 _ _ * *
 _ _ _ *
 */
// note '_' denotes empty space
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        };
        cout << endl;
        i--;
    };
};

/*
    1 1 1 1
    _ 2 2 2
    _ _ 3 3
    _ _ _ 4
*/
// note '_' denotes empty space
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = n;
    int value = 1;
    while (i >= 1)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << value << " ";
            j++;
        };
        cout << endl;
        value++;
        i--;
    };
};

/*
_ _ _ 1
_ _ 2 2
_ 3 3 3
4 4 4 4
*/
int main()
{
    int n, i = 1;
    cout << "Enter value of n: ";
    cin >> n;
    int value = 1;
    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        };
        while (j <= i)
        {
            cout << value << " ";
            j++;
        };
        i++;
        value++;
        cout << endl;
    };
};

/*
1 2 3 4
_ 2 3 4
_ _ 3 4
_ _ _ 4
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int space = n - i;
        int j = 1;
        int value = n - i + 1;
        while (space)
        {
            cout << "_ ";
            space--;
        };
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        };
        i--;
        cout << endl;
    };
};

/*
_ _ _ 1
_ _ 2 3
_ 4 5 6
7 8 9 10
*/
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = 1, value = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        };
        int j = 1;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        };
        i++;
        cout << endl;
    };
};

/*
_ _ _ 1 _ _ _
_ _ 1 2 1 _ _
_ 1 2 3 2 1 _
1 2 3 4 3 2 1
*/
int main()
{
    int n, i = 1;
    cout << "Enter value of n: ";
    cin >> n;
    int count = n;
    while (i <= n)
    {
        int space1 = n - i;
        int j = 1;
        while (space1)
        {
            cout << "_ ";
            space1--;
        };
        while (j <= i)
        {
            cout << j << " ";
            j++;
        };
        int start = i - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }
        int space2 = count - i;
        while (space2)
        {
            cout << "_ ";
            space2--;
        };
        i++;
        cout << endl;
    };
};

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        };
        int star = n - i;
        while (star)
        {
            cout << "* ";
            star--;
        };
        int star2 = n - i;
        while (star2)
        {
            cout << "* ";
            star2--;
        };
        int jj = 1;
        int value = i;
        while (jj <= i)
        {
            cout << value << " ";
            value--;
            jj++;
        };
        i--;
        cout << endl;
    };
};