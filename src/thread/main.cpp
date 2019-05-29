//
//  main.cpp
//  typed
//
//  Created by 郭斌 on 2019/5/25.
//  Copyright © 2019 guobin. All rights reserved.
//

#include <iostream>

using namespace std;
void sumOf(float a) { cout << a << endl; }
void sumOf(float a, float b) { cout << a + b << endl; }

int main(int argc, const char *argv[]) {
    sumOf(5.5);
    sumOf(1, 2.2);
    float arr[] = {1, 2.5, 3.5, 4};
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    return 0;
}