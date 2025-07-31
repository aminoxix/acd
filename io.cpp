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

// find minimum through iteration & swap the value with the position
vector<int> selection_sort(vector<int> arr) {
    for (int i = 0; i <= arr.size() - 2; i++) {
        for (int j = i; j <= arr.size() - 1; j++) {
            if (arr[j] < arr[i]) {
                // int temp = arr[j];
                // arr[j] = arr[i];
                // arr[i] = temp;

                // without using third
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    return arr;
}

// start from comparing 2 numbers & swap
vector<int> bubble_sort(vector<int> arr) {
    for (int i = 0; i <= arr.size() - 2; i++) {
        // for optimisation
        int didSwap = 0;
        for (int j = arr.size() - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                // if swap happens
                didSwap = 1;
                swap(arr[j], arr[j - 1]);
            }
        }
        // if no swap happens, break out thru loop
        if (didSwap == 0) cout << "time complexity is O(n) or linear\n"; break;
    }

    return arr;
}

void recursive_bubble_sort(vector<int> &arr, int n) {
    if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j+1]);
        }
    }

    recursive_bubble_sort(arr, n - 1);
}

/*
* traverse number to it's right position
* best case: O(n)
* worst case: O(n ^ 2) = n square 
*/ 
vector<int> insertion_sort(vector<int> arr) {
    for (int i = 1; i <= arr.size() - 1; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j-1] > arr[j]) {
                swap(arr[j], arr[j-1]);
            }
        }
    }
    return arr;
}

void recursive_insertion_sort(vector<int> &arr, int n) {
    if (n <= 1) return;

    // Sort first n-1 elements
    recursive_insertion_sort(arr, n - 1);

    // Insert last element at its correct position
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements greater than last
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp = {};
    int firstPointer = left;
    int secondPointer = mid + 1;

    while (firstPointer <= mid && secondPointer <= right) {
        if (arr[firstPointer] < arr[secondPointer]) {
            temp.push_back(arr[firstPointer]);
            firstPointer++;
        } else {
            temp.push_back(arr[secondPointer]);
            secondPointer++;
        }
    }

    while (firstPointer <= mid) {
        temp.push_back(arr[firstPointer]);
        firstPointer++;
    }

    while (secondPointer <= right) {
        temp.push_back(arr[secondPointer]);
        secondPointer++;
    }

    // temp copy back to array
    for (int i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}
void merge_sort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        // traversing from left to the pivot
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        // traversing from right to the pivot
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        // swap if NOT crosses
        if (i < j) swap(arr[i], arr[j]);
    }

    // swap if crosses
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);

        quick_sort(arr, low, partitionIndex - 1);
        quick_sort(arr, partitionIndex + 1, high);
    }
}

// int merge(vector<int>& nums, int lower, int upper) {
// // vector<int> countRangeSum(vector<int>& nums, int lower, int upper) {
//     vector<int> temp = {};
//     int firstPointer = lower;
//     int mid = (lower + upper) / 2;
//     int secondPointer = mid + 1;
    
//     while (firstPointer <= mid && secondPointer <= upper) {
//         if (nums[firstPointer] < nums[secondPointer]) {
//             temp.push_back(nums[firstPointer]);
//             firstPointer++;
//         } else {
//             temp.push_back(nums[secondPointer]);
//             secondPointer++;
//         };
//     }

//     while (firstPointer <= mid) {
//         temp.push_back(nums[firstPointer]);
//         firstPointer++;
//     }

//     while (secondPointer <= upper) {
//         temp.push_back(nums[secondPointer]);
//         secondPointer++;
//     }

//     int sum = 0;

//     for (int i = lower; i <= upper; i++) {
//         sum += temp[i - lower];
//     }

//     return sum;
// }
// int mergeSort(vector<int>& nums, int lower, int upper) {
//     if (lower >= upper) return nums[lower];

//     int mid = (lower + upper) / 2;
//     int leftSum = mergeSort(nums, lower, mid);
//     int rightSum = mergeSort(nums, mid + 1, upper);
//     int mergeSum = merge(nums, lower, upper);

//     return mergeSum;
// }
// int countRangeSum(vector<int>& nums, int lower, int upper) {
//     return mergeSort(nums, lower, upper);
// }

// // memoization - top down
// int dpFibonacci(int n, vector<int> &dp) {
//     if (n <= 1) return n;

//     if (dp[n] != -1) return dp[n];

//     return dp[n] = dpFibonacci(n - 1, dp) + dpFibonacci(n - 2, dp);
// }

// tabulation - bottom up
int dpFibonacci(int n, vector<int> &dp) {
    if (n <= 1) return n;
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int dpFibonacci(int n) {
    if (n <= 1) return n;

    int curr, prev1 = 1, prev2 = 0;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}

// int longestConsecutive(vector<int>& nums) {
//     if (nums.empty()) return 0;
//     sort(nums.begin(), nums.end());
    
//     int maxLen = 0, currLen = 1;

//     for (int i = 0; i < nums.size() - 1; i++) {
//         // compare index (i + 1) & (i) + 1 value
//         if (nums[i + 1] == nums[i] + 1) {
//             currLen++;
//         } else if (nums[i] != nums[i + 1]) { // compare duplicates, if so continue
//             maxLen = max(maxLen, currLen);
//             currLen = 1;
//         }
//     }

//     return max(maxLen, currLen);
// }

// optimal using unordered_set
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int num : nums) {
        st.insert(num);
    }

    for (auto it : st) {
        if (st.find(it - 1) == st.end()) { // not found
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) { // if found
                x += 1;
                count += 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    // Step 1: Count frequencies
    for (int num : nums) {
        freq[num]++;
    }

    // Step 2: Use set (sorted by frequency descending)
    set<pair<int, int>, greater<>> sortedSet;
    for (auto& [num, count] : freq) {
        sortedSet.insert({count, num});  // (frequency, number)
    }

    // Step 3: Collect top-k frequent elements
    vector<int> result;
    for (auto& [count, num] : sortedSet) {
        if (result.size() == k) break;
        result.push_back(num);
    }

    return result;
}

// containers with water / rainwater
int maxArea(vector<int>& heights) {
    // // brute force
    // int largest = 0;
    // for (int i = 0; i < heights.size(); i++) {
    //     for (int j = i + 1; j < heights.size(); j++) {
    //         int height = min(heights[i], heights[j]);
    //         int width = j - i;
    //         int area = height * width;
    //         largest = max(area, largest);
    //     }
    // }
    // return largest;

    int largest = 0;
    int left = 0, right = heights.size() - 1;
    
    while (left < right) {
        largest = max(largest, min(heights[left], heights[right]) * (right - left));
        if (heights[left] < heights[right]) left++; else right--;
    }

    return largest;
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

    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // binarySearch(arr, 11);
    // reverseNumber(n);

    // int n = 16;
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

    // vector<int> array = { 1, 4, 13, 8 };
    // vector<int> array = { 3, 9, 6 };
    // vector<int> array = { 1, 2, 4 };
    // int result = maxFrequency(array, 5);
    // vector<int> array = { 9930,9923,9983,9997,9934,9952,9945,9914,9985,9982,9970,9932,9985,9902,9975,9990,9922,9990,9994,9937,9996,9964,9943,9963,9911,9925,9935,9945,9933,9916,9930,9938,10000,9916,9911,9959,9957,9907,9913,9916,9993,9930,9975,9924,9988,9923,9910,9925,9977,9981,9927,9930,9927,9925,9923,9904,9928,9928,9986,9903,9985,9954,9938,9911,9952,9974,9926,9920,9972,9983,9973,9917,9995,9973,9977,9947,9936,9975,9954,9932,9964,9972,9935,9946,9966 };
    // int result = maxFrequency(array, 3056);
    
    // int result = lengthOfLongestSubstring("abcabcbb");
    
    // vector<int> array1 = {11, 7, 3, 6, 9, 1, 5, 10, 2, 4, 8};
    // vector<int> array1 = {0};
    // vector<int> result = selection_sort(array1);
    // vector<int> result = bubble_sort(array1);
    // vector<int> result = insertion_sort(array1);
    // merge_sort(array1, 0, array1.size() - 1);
    // quick_sort(array1, 0, array1.size() - 1);
    // vector<int> result = array1;
    
    // vector<int> array2 = {-2, 5, -1};
    // int result = countRangeSum(array2, -2, 2);

    // recursive_bubble_sort(array1, array1.size());
    // recursive_insertion_sort(array1, array1.size());
    
    // int n;
    // cin >> n;
    // vector<int> dp(n + 2, -1);
    // int result = dpFibonacci(n, dp);
    
    // vector<int> dp(n + 1);
    // int result = dpFibonacci(n, dp);
    
    // int result = dpFibonacci(n);

    vector<int> array1 = {0, 3, 2, 5, 4, 6, 1, 1};
    vector<int> array2 = {2, 20, 4, 10, 3, 4, 5};
    vector<int> array3 = {1, 2, 2, 3, 3, 3};
    vector<int> array4 = {1, 2};
    // int result = longestConsecutive(array1);
    
    // vector<int> result = topKFrequent(array4, 2);
    
    vector<int> array5 = {1, 7, 2, 5, 4, 7, 3, 6};
    int result = maxArea(array5);

    cout << "result: " << result << "\n";
    // for (int n : result) {
    //     cout << n << " ";
    // }

    return 0;
}
