/*A. Watermelon
time limit per test1 second
memory limit per test64 megabytes
One hot summer day Pete and his friend Billy decided to buy a watermelon.
They chose the biggest and the ripest one, in their opinion.
After that the watermelon was weighed, and the scales showed w kilos.
They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.
Pete and Billy are great fans of even numbers,
that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos,
at the same time it is not obligatory that the parts are equal.
The boys are extremely tired and want to start their meal as soon as possible,
that's why you should help them and find out, if they can divide the watermelon in the way they want.
For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples
inputCopy
8
outputCopy
YES
Note
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).*/

#include <iostream>
#define db1(x) cerr << #x << "=" << x << '\n'
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define repA(i, a, n) for (ll i = a; i <= (n); ++i)
#define repD(i, a, n) for (ll i = a; i >= (n); --i)
#define mp make_pair
#define sp << ' ' <<
#define pb push_back
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
using ll = long long;

int main()
{
    FastIO
        ll n;
    cin >> n;
    if (n == 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else if (n % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}