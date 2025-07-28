#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a;
        cin >> a;

        int b = a % 3;

        if (b == 0)
        {
            cout << "NORMAL" << endl;
        }
        else if (b == 1)
        {
            cout << "HUGE" << endl;
        }
        else if (b == 2)
        {
            cout << "SMALL" << endl;
        }
    }

    return 0;
}