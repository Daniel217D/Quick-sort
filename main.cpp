#include <iostream>

#include "libraries/quick_sort.h"

using std::cin;
using std::cout;

int main() {
    srand(time(0));
    bool globFlag = true;
    for (int i = 0; i < 1000000; ++i) {
        unsigned int length = 10000;
        int* array = new int[length];
        for (unsigned int i = 0; i < length; ++i) {
            array[i] = rand() % 10;
//            cout << array[i] << " ";
        }
//        cout << "\n";

        quick_sort(array, length);

//        for (unsigned int i = 0; i < length; ++i) {
//            cout << array[i] << " ";
//        }
//        cout << "\n";
        bool flag = true;

        for (int i = 1; i < length && flag; ++i) {
            flag = array[i-1] <= array[i];
        }
//        cout << "!";
//        cout << flag;
//        cout << "!\n";
cout << i << "\n";
        globFlag = globFlag && flag;
        delete[] array;
    }

    cout << globFlag;

    return 0;
}
