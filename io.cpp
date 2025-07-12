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

// void binarySearch(vector<int> arr, int n) {
//     int mid;
//     int temp = 0; // low
//     int size = arr.size(); // high

//     do {
//         mid = (temp + size) / 2;
//         if (n == arr[mid]) {
//             cout << "mid: " << mid;
//             break;
//         } else if (n < arr[mid]) {
//             size = mid - 1; // shrink to left
//         } else {
//             temp = mid + 1; // shrink to right
//         }
//     } while (temp <= size);
// }

// int reverseNumber(int n) {
//     int reversed = 0;
//     int quo, rem;
//     quo = n;

//     while (quo != 0) {
//         rem = quo % 10;

//         // leetcode to handle overflow & underflow, in case 0, it's answer could be in long (out of the ctx)
//         if ((reversed > INT_MAX / 10) || (reversed < INT_MIN / 10)) {
//             return 0; // Return 0 if reversing x would cause overflow/underflow
//         }

//         reversed = reversed * 10 + rem;
//         quo = quo / 10;
//     }
//     return reversed;
// }

// bool isPalindrome(int x) {
//     if (x < 0) {
//         return 0;
//     }
//     int reversed = 0;
//     for (int quo = x; quo != 0; quo /= 10){
//         int rem = quo % 10;
//         if ((reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && rem > 7)) || (reversed < INT_MIN / 10) || (reversed == INT_MIN / 10 && rem < -8)) return 0;
//         reversed = reversed * 10 + rem;
//     }
//     return reversed == x;
// }

// int findGCD(int n, int m) {
//     int largest = 1;
//     int x = n, y = m;
//     vector<int> temp = {};
//     vector<int> divisor = {2, 3, 5, 7};

//     for (int i = 0; i < divisor.size(); i++) {
//         while (x % divisor[i] == 0 && y % divisor[i] == 0) {
//             x /= divisor[i];
//             y /= divisor[i];
//             temp.push_back(divisor[i]);
//         }
//     }

//     for (int i = 0; i < temp.size(); i++) {
//         largest *= temp[i];
//     }

//     return largest;
// }

// bool containsDuplicate(vector<int>& nums) {
//     unordered_set<int> seen;
//     for (int num : nums) {
//         if (seen.count(num)) {
//             return true;
//         }
//         seen.insert(num);
//     }
//     return false;
// }


// bool isArmstrongNumber(int n) {
//     int count = 0;

//     vector<int> reversed;
//     int quo, rem;
//     quo = n;
//     while (quo != 0) {
//         rem = quo % 10;
//         count++;
//         reversed.push_back(rem);
//         quo = quo / 10;
//     }

//     int result = 0;
//     for (int n : reversed) {
//         result += pow(n, count);
//     }

//     return result == n;
// }


// recursion
// // option 1:
// void recursivelyPrint(int n, int sum) {
//     if (n < 1) {
//         cout << "sum: " << sum << "\n"; 
//         return;
//     }

//     sum += n;
//     n--;
//     recursivelyPrint(n, sum); 
// }

// // option 2:
// int recursivelyPrint(int n, int sum) {
//     if (n < 1) return sum;

//     sum += n;
//     n--;
//     recursivelyPrint(n, sum); 
// }

// option 3:
int recursivelyPrint(int n) {
    if (n < 1) return 0;
    // if (n < 1) return 1; // factorial
    return n + recursivelyPrint(n - 1);
    // return n * recursivelyPrint(n - 1); // factorial
}

void lengthOfAnything(int n) {
    cout << "length: " << to_string(n).length() << "\n";
}

// void printDivisors(int n) {
//     vector<int> divisors = {};
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             divisors.push_back(i);
//             cout << "i: " << i << "\n";

//             if (i != n / i) {
//                 divisors.push_back(n / i);
//                 cout << "i: " << n / i << "\n";
//             }
//         }
//     }
// }

// bool isPrimeNumber(int n) {
//     vector <int> divisors = {};
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             divisors.push_back(i);
//             if (i != n / i) {
//                 divisors.push_back(n / i);
//             }
//         }
//     }

//     if (divisors.size() == 2) {
//         return 1;
//     } else return 0;
// }

// leetcode
// int fib(int n) {
//     if (n <= 1) return n;
//     return fib(n - 1) + fib(n - 2);
// }

// vector<int> recursionReverseArray(vector<int> arr) {
//     static int i = 0;
//     int n = arr.size();

//     if (i >= n - i - 1) return arr;

//     swap(arr[i], arr[n - i - 1]);
//     i++;

//     return recursionReverseArray(arr);
// }

// bool isPalindrome(int n) {
//     static int reversed = 0;
//     static int i = 0;
//     int size = to_string(n).length();

//     int rem;
//     if (n != 0) {
//         rem = n % 10;
//         reversed = reversed * 10 + rem;
//         isPalindrome(n / 10);
//     }

//     return reversed == n;
// }

// recursive palindrome check
string getCleanString(string s) {
    static string cleaned = "";
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    return cleaned;
}
bool isPalindrome(string n, int i) {
    static string cleaned = getCleanString(n);
    int size = cleaned.size();

    if (i >= size / 2) return true;
    if (cleaned[i] != cleaned[size - i - 1]) return false;
    return isPalindrome(cleaned, i + 1);
}

// int maxFrequency(vector<int> nums, int k) {
//     sort(nums.begin(), nums.end());
//     int maxFreq = 1;

//     for (int i = nums.size() - 1; i >= 0; i--) {
//         int current = nums[i];
//         int currFreq = 1;
//         long long operations = k;

//         for (int j = i - 1; j >= 0; j--) {

//             long long diff = current - nums[j];
//             if (operations >= diff) {
//                 operations -= diff;
//                 currFreq++;
//             } else break;
//         }

//         maxFreq = max(maxFreq, currFreq);
//     }

//     return maxFreq;
// }

/* sliding window */
int maxFrequency(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());

    int right = 0, left = 0, result = 0;
    long long total = 0;

    // iterate thru all elements
    while (right < arr.size()) {
        total += arr[right];

        /*
        condition:
            expand while (right * window length) < k + total; 
            else increase left position by 1 & decrease its value from total
        */ 
        while (1LL * arr[right] * (right - left + 1) > k + total) {
            total -= arr[left];
            left += 1;
        }

        // get result by max from result i.e., initially 0 &, window length
        result = max(result, right - left + 1);
        right += 1;
    }

    return result;
}

template<typename C, typename T>
bool contains(C&& c, T e) { 
    return find(begin(c), end(c), e) != end(c);
};
// int lengthOfLongestSubstring(string s) {
//     vector<char> characters = {};
//     vector<int> result = {};

//     if (s.empty()) return 0;

//     for (int i = 0; i < s.size(); i++) {
//         characters.clear();
//         characters.push_back(s[i]);

//         for (int j = i + 1; j < s.size(); j++) {
//             if (contains(characters, s[j])) {
//                 break;
//             }
//             characters.push_back(s[j]);
//         }

//         result.push_back(characters.size());
//     }

//     sort(result.begin(), result.end(), greater());
//     return result[0];
// }

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int maxLength = 0, left = 0;

    for (int right = 0; right < s.size(); right++) {
        /*
        * If s[right] is already in the set (i.e., it's a duplicate), enter the loop.
        * .count() returns 1 if the character is in the set.
        */
        while (seen.count(s[right])) {
            seen.erase(s[left]);
            left++;
        }
        seen.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}


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

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // binarySearch(arr, 11);
    // reverseNumber(n);

    int n = 16;
    // int m = 30;

    // isArmstrongNumber(n);
    // bool result = containsDuplicate(arr);
    
    // int result = recursivelyPrint(4);
    
    // lengthOfAnything(n);
    
    // printDivisors(n);
    // auto result = isPrimeNumber(5);
    
    // int result = fib(3);

    // auto result = recursionReverseArray(arr);
    // bool result = isPalindrome("abcba", 0);

    vector<int> array = { 1, 4, 13, 8 };
    // vector<int> array = { 3, 9, 6 };
    // vector<int> array = { 1, 2, 4 };
    // int result = maxFrequency(array, 5);
    // vector<int> array = { 9930,9923,9983,9997,9934,9952,9945,9914,9985,9982,9970,9932,9985,9902,9975,9990,9922,9990,9994,9937,9996,9964,9943,9963,9911,9925,9935,9945,9933,9916,9930,9938,10000,9916,9911,9959,9957,9907,9913,9916,9993,9930,9975,9924,9988,9923,9910,9925,9977,9981,9927,9930,9927,9925,9923,9904,9928,9928,9986,9903,9985,9954,9938,9911,9952,9974,9926,9920,9972,9983,9973,9917,9995,9973,9977,9947,9936,9975,9954,9932,9964,9972,9935,9946,9966 };
    // int result = maxFrequency(array, 3056);
    
    int result = lengthOfLongestSubstring("abcabcbb");

    // for (int n : result) {
    //     cout << n << " ";
    // }
    cout << "result: " << result << "\n";

    return 0;
}
