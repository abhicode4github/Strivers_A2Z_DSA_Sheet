#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << "1"; // Print 1 for n = 1 or n = 2
    } else {
        int n1 = 1, n2 = 1, n3;
        for (int i = 3; i <= n; i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n2; // Print the nth Fibonacci number for n > 2
    }

    return 0;
}
