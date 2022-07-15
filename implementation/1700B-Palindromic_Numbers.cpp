
// Reference: https://codeforces.com/problemset/problem/1700/B

#include <math.h>
#include <iostream>
using namespace std;


// TODO: fix extreme values error.

int main()
{
    int n;
    cin >> n;

    bool found;
    int len, x, p;
    unsigned long long int y;
    for (int i = 0; i < n; i++)
    {
        cin >> len >> x;
        y = 0;
        
        int last = x;
        while (last >= 10) {
            last /= 10;
        }

        if (last == 9) {
            for (int i = 0; i < (len + 1); i++) {
                p = pow(10, i) + 1e-9;
                y = y + p;
            }
            y = y - x;
        } else {
            for (int i = 0; i < len; i++) {
                p = pow(10, i) + 1e-9;
                y = y + 9 * p;
            }
            y = y - x;
        }
        cout << y <<endl;
    }
    return 0;
}