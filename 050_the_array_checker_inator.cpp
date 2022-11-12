// Moksha Adhikary
// 050 - The Array Checker-inator!
// https://codeforces.com/gym/102697/problem/050

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <fstream>
#include <iomanip>
#include <random>
#include <stack>
#include <set>

using namespace std;

#define ll long long
#define ld long double
#define ar array

#define vc vector
#define pb push_back
#define all(c) begin(c), end(c)
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0 ; i < n ; i++)
#define rrep(i, a, n) for (int i = a ; i < n ; i++)
#define per(i, n) for (int i = n - 1 ; i >= 0 ; i--)

//cout << setprecision() << fixed;

void solve() {
    int n;
    cin >> n;
    vc<int> v;
    int temp;

    rep(i, n) {
        cin >> temp;
        v.pb(temp);
    }

    cin >> n;
    vc<int> v2;
    
    rep(i, n) {
        cin >> temp;
        v2.pb(temp);
    }

    set<int> s(all(v));
    set<int> s2(all(v2));

    sort(all(v));
    sort(all(v2));

    if (v == v2 || s == s2) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

void querySolve() {
    int t;
    cin >> t;

    rep(i, t) {
        solve();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    // querySolve();
}
