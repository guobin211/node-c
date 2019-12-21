//
// Created by 郭斌 on 2019-06-05.
//

#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <iostream>

using namespace std;
namespace SortTestHelper {
    int *generateRandomArray(int n, int left, int rigth) {
        int *arr = new int[n];
        srand(time(nullptr));
        for (int i = 0; i < n; ++i) {
            arr[i] = random() % (rigth - left + 1) + left;
        }
        return arr;
    }

    template<typename T>
    void printArray(T arr[], int length) {
        for (int i = 0; i < length; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void testSort(string sortName, void(*sort)(T[], int), T arr[], int n) {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        // 测试结果是否正确
        assert(isSorted(arr, n));
        cout << sortName << ": " << double(endTime - startTime) / CLOCKS_PER_SEC << " 秒 " << endl;
    }

    int *copyIntArray(int a[], int n) {
        int *arr = new int[n];
        copy(a, a + n, arr);
        return arr;
    }
}

#endif //SELECTIONSORT_SORTTESTHELPER_H
