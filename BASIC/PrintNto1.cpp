
#include <iostream>
using namespace std;

void PrintNto1(int n, int base)
{
    if (base == n)
    {
        cout << base << endl;
        return;
    }

    PrintNto1(n, base + 1);

    cout << base << endl;
}

int main()
{
    PrintNto1(4, 1);

    return 0;
}
```
