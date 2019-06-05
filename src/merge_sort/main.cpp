#include <iostream>
#include "Student.h"
#include "SortTestHelper.h"
using namespace std;

int main(int argc, const char *argv[]) {
    string name = "归并排序";
    cout << "归并排序" << endl;
    Student student = {"jack", 22};
    cout << student.name << endl;

    int n = 100;
    int *arr = SortTestHelper::generateRandomArray(n, 0 , n * 100);
    SortTestHelper::printArray(arr, n);

    return 0;
}