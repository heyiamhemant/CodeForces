/*C2.Good Numbers(hard version)
    time limit per test2 seconds
memory limit per test256 megabytes
The only difference between easy and hard versions is the maximum value of 𝑛.

You are given a positive integer number 𝑛.
You really love good numbers so you want to find the smallest
good number greater than or equal to 𝑛.

The positive integer is called good
if it can be represented as a sum of distinct
powers of 3(i.e.no duplicates of powers of 3 are allowed).

For example :

    30 is a good number : 30 = 33 + 31,
                            1 is a good number : 1 = 30,
                            12 is a good number : 12 = 32 + 31,

                            but 2 is not a good number : you can't represent it as a sum of distinct powers of 3 (2=30+30),
                            19 is not a good number : you can't represent it as a sum of distinct powers of 3 (for example, the representations 19=32+32+30=32+31+31+31+30 are invalid),
                            20 is also not a good number : you can't represent it as a sum of distinct powers of 3 (for example, the representation 20=32+32+30+30 is invalid). Note, that there exist other representations of 19 and 20 as sums of powers of 3 but none of them consists of distinct powers of 3.

                                                                                                                                                                                                                                                                                                                                                                                                                                                    For the given positive integer 𝑛 find such smallest 𝑚(𝑛≤𝑚)
that 𝑚 is a good number.

You have to answer 𝑞 independent queries.

Input
    The first line of the input contains one integer 𝑞(1≤𝑞≤500) — the number of queries.Then 𝑞 queries follow.

The only line of the query contains one integer 𝑛(1≤𝑛≤1018)
    .

Output
For each query,
print such smallest integer 𝑚(where 𝑛≤𝑚) that 𝑚 is a good number.
*/
#include <iostream>
#include <vector>
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
    rep(i, n)
    {
        ll num;
        cin >> num;
        ll res = 1, p = 3;
        while (res <= num)
        {
            res += p;
            p *= 3;
        }
        while (p)
        {
            if (res - p >= num)
            {
                res -= p;
                p /= 3;
            }
        }
        cout << res << endl;
    }

    return 0;
}