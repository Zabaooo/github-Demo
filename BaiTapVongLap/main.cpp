#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*Nhập n là một số nguyên ko quá 100. In ra các hình tương ứng, mỗi hình cách nhau 1 dòng trống.*/

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else cout << "#";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}