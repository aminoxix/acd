#include <cstring>
#include <iostream>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,0,6},
        {7,8,9}
    };
    int copy[3][3];
    std::memcpy(copy, arr, sizeof(arr));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (copy[i][j] == 0) {
                if (j > 0) arr[i][j - 1] = 0;
                arr[i][j] = 0;
                if (j < 2) arr[i][j + 1] = 0;

                if (i > 0) arr[i - 1][j] = 0;
                if (i < 2) arr[i + 1][j] = 0;
            }
        }
    }

    std::cout << "[";
    std::cout << arr[0][0] << arr[0][1] << arr[0][2] << ",";
    std::cout << arr[1][0] << arr[1][1] << arr[1][2] << ",";
    std::cout << arr[2][0] << arr[2][1] << arr[2][2] << "]";
    std::cout << std::endl;

    return 0;
}
