// Moksha Adhikary
// 096 - Numbers
// https://codeforces.com/gym/102697/problem/096

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

#define vt vector
#define pb push_back
#define all(c) begin(c), end(c)
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0 ; i < n ; i++)
#define rrep(i, a, n) for (int i = a ; i < n ; i++)
#define per(i, n) for (int i = n - 1 ; i >= 0 ; i--)

//setprecision(), fixed

bool gcdcheck(int k, int n) {
    rrep(i, 2, min(k, n)+1) {
        // cout << k << " " << i << " " << (double)k/i << "\n";
        // cout << n << " " << i << " " << (double)n/i << "\n";
        double kn = (double)k/i;
        double nn = (double)n/i;

        if (floor(kn) == kn && floor(nn) == nn) {
            // cout << k << " " << n << " : " << kn << " " << floor(kn) << " " << nn << " " << floor(nn) << "\n";
            return true;
        }
    }
    return false;
}

void solve() {
    int num;
    cin >> num;

    int count = 1;

    rrep(i, 2, num) {
        if (!gcdcheck(i, num)) {
            count++;
        }
    }

    cout << count << "\n";
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
