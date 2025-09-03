#include <iostream>
using namespace std;

int main() {
    cout << "Pattern Printing in C++" << endl;

    // ===============================
    // Pattern 1: Right-Angled Triangle
    // *
    // **
    // ***
    // ****
    // *****
    // ===============================
    cout << "\nPattern 1:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 2: Inverted Right-Angled Triangle
    // *****
    // ****
    // ***
    // **
    // *
    // ===============================
    cout << "\nPattern 2:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 3: Number Triangle
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // ===============================
    cout << "\nPattern 3:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 4: Inverted Number Triangle
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // ===============================
    cout << "\nPattern 4:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 5: Pyramid
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // ===============================
    cout << "\nPattern 5:\n";
    int n = 5;
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 6: Inverted Pyramid
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    // ===============================
    cout << "\nPattern 6:\n";
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 7: Diamond
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    // ===============================
    cout << "\nPattern 7:\n";
    // Upper part
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }
    // Lower part
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }

    // ===============================
    // Pattern 8: Hourglass (Right-Angled Diamond)
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    // ===============================
    cout << "\nPattern 8:\n";
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) stars = 2 * n - i; // mirror after middle row
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 9: Hollow Square
    // *****
    // *   *
    // *   *
    // *   *
    // *****
    // ===============================
    cout << "\nPattern 9:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
  // ===============================
    // Pattern 10: Floyd's Triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // ===============================
    cout << "\nPattern 10: Floyd's Triangle\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 11: Pascal's Triangle
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // ===============================
    cout << "\nPattern 11: Pascal's Triangle\n";
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1); // nCr formula
        }
        cout << endl;
    }

    // ===============================
    // Pattern 12: Butterfly Pattern
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // ===============================
    cout << "\nPattern 12: Butterfly Pattern\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // ===============================
    // Pattern 13: Hollow Diamond
    //     *
    //    * *
    //   *   *
    //  *     *
    // *********
    //  *     *
    //   *   *
    //    * *
    //     *
    // ===============================
    cout << "\nPattern 13: Hollow Diamond\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 14: Zig-Zag (Wave)
    //     *        *
    //   *   *    *   *
    // *       **       *
    // ===============================
    cout << "\nPattern 14: Zig-Zag (Wave)\n";
    int rows = 3, cols = 15;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // ===============================
    // Pattern 15: 0-1 Triangle
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    // ===============================
    cout << "\nPattern 15: 0-1 Triangle\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
