#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> seen;

    while (n != 1) {
        if (seen.count(n)) {
            cout << "No";
            return 0;
        }
        seen.insert(n);

        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }

    cout << "Yes";
}