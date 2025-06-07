#include<bits/stdc++.h>
using namespace std;

// void nForest(int n) {
// 	// Write your code here.
// 	for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j < n) {
//                 cout << "*" << " ";
//             } else {
//                 cout << "*" << "\n";
//             }
//         }
//     }
// }

// void nForest(int n) {
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*" << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << i << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j++) {
//             cout << "*" << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j++) {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
//     // n + (n - 2) + 1
//     // 3 + 1 + 1
// 	// Write your code here.
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n + (n - 2) + 1; j++) {
//             // decreasing space
//             if (n - i >= j || j - n >= i) {
//                 cout << " ";
//             } else {
//                 cout << "*";
//             };
//             // (n - i) >= j
//             // 3 - 1 (2) >= 1 : true; print space
//             // 3 - 1 (2) >= 2 : true 
//             // 3 - 1 (2) >= 3 : true
//             // 3 - 1 (2) >= 4 : false, 4 - 3 (1) >= 1; print space
//             // 3 - 1 (2) >= 5 : false, can write as 5 (j) - 3 (n) = (2) >= 1 (i)

//             // 3 - 2 (1) >= 1 : true
//             // 3 - 2 (1) >= 2 : false
//             // 3 - 2 (1) >= 3 : false, can write as 3 (j) - 3 (n) >= 2 (i)
//             // 3 - 2 (1) >= 3 : false, can write as 3 (j) - 3 (n) >= 2 (i)
//             // 3 - 2 (1) >= 3 : false, can write as 3 (j) - 3 (n) >= 2 (i)

//             // (n - j) >= i
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
//     int size = n + (n - 2) + 1;
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= size; j++) {
//             if ((n - i) >= j || (j - n) >= i) {
//                 cout << " ";
//             } else cout << "*";
//         }
//         cout << "\n";
//     }
// }

// void forInnerLoop(int n, int size, int i){
//     for (int j = 0; j <= size; j++) {
//         if ((n - i) >= j || (j - n) >= i) {
//             cout << " ";
//         } else cout << "*";
//     }
//     cout << "\n";
// }

// void nForest(int n) {
//     int size = n + (n - 2) + 1;

//     for (int i = 1; i <= n; i++) {
//         forInnerLoop(n, size, i);
//     }
//     for (int i = n; i >= 1; i--) {
//         forInnerLoop(n, size, i);
//     }
// }

// void nForest(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (j <= n) {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             if (j < i) {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             int indexDivisibleBy2 = i % 2;
//             if (indexDivisibleBy2 == 1) {
//                 cout << j % 2;
//             } else cout << (j - 1) % 2;
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
//     int size = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             size = size + 1;
//             cout << size << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 cout << "*";
//             } else cout << " ";
//         }
//         cout << "\n";
//     }
// }

// void nForest(int n) {
// //  @IMP:
//     int pattern = 2 * (n - 1); // 2 x ( 3 - 1) => 6 - 2 = 4
//     for (int i = 1; i <= n; i++) {

//         for (int j = 1; j <= i; j++) {
//             cout << j;
//         }

//         for (int j = pattern; j >= 1; j--) {
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--) {
//             cout << j;
//         }

//         cout << "\n";
//         pattern -= 2;
//     }
// }

// @IMP CHAR
// void nForest(int n) {
//     for (int i = 0; i < n; i++) {
//         for (char ch = 'A'; ch <= 'A' + i; ch++) {
//             cout << ch << " ";
//         }
//         cout << "\n";
//     }
// }

// int countDigits(int n) {
//     int counter = 0;
//     while (n > 0) {
//         counter += 1;
//         n = n / 10;
//         cout << n << "\n";
//     }

//     // // optimized
//     // int counter = (int)log10(n) + 1;
//     return counter;
// }

int main() {
    // int x;
    // cin >> x;
    // cout << "x is " << x;

    // int length = 5;
    // int arr[length];

    // cout << "Array length: " << length << endl;

    // // patterns
    // for (int i = 1; i <= length; i++) {
    //     cin >> arr[i];
    //     cout << arr[i] << " " << endl;
    // }
    // nForest(3);

    // // counter
    // int numbers = countDigits(12347678);
    // cout << "number of numbers: " << numbers;
    return 0;
}


