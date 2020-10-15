#include "quick_sort.h"
#include <iostream>

using std::swap;

void qs(int *arr, unsigned int left, unsigned int right) {
    unsigned  int l = left + 1, r = right;
    int el = arr[left];

    while(l <= r) {
        while(arr[l] < el) {
            l++;
        }

        while(arr[r] > el) {
            r--;
        }

        if(l <= r) {
            std::swap(arr[l++], arr[r--]);
        }
    }

    std::swap(arr[left], arr[r]);

    if(left - (r - 1) > 1) {
        qs(arr, left, r - 1);
    }

    if((r + 1) - right > 1) {
        qs(arr, r + 1, right);
    }

}

void quick_sort(int *arr, unsigned int length) {
    qs(arr, 0, --length);
}
