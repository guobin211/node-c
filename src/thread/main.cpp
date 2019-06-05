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
void hello(int n) {
    cout << "hello library"<< n << endl;
}

int main(int argc, const char *argv[]) {
    // 计算机最小的单位 bit 0或者1组成的2进制
    // 1byte = 8bit 0000 0000
    // tb = 1024gb = 1024mb = 1024kb = 1024byte = 8bit
    bool success;
    char firstChar;
    int rating;
    float ratingF;
    double ratingD;
    wchar_t wtChar;
    // 1 byte
    cout << sizeof(success) << endl;
    // 1 byte = 8bit  -128~127 或者
    cout << sizeof(firstChar) << endl;
    // 4 byte 
    cout << sizeof(rating) << endl;
     // 4 byte
    cout << sizeof(ratingF) << endl;
     // 8 byte
    cout << sizeof(ratingD) << endl;
     // 4 byte
    cout << sizeof(wtChar) << endl;
    // 8 byte long修饰符 长整形
    long int la = 9223372036854775807;
    // 16 byte 长double
    long double ld = 16;
    cout << la << endl;
    cout << sizeof(la) << endl;
    cout << sizeof(ld) << endl;

    sumOf(5.5);
    sumOf(1, 2.2);
    float arr[] = {1, 2.5, 3.5, 4};
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    int a = 3, b = 5, c = 6;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << b << endl;
    hello(3);
    // 枚举类
    enum color {red, blue=5, green} colorEnum;
    colorEnum=blue;
    cout << colorEnum << endl;
    return 0;
}