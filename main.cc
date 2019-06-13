#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    char rating = 'a';
    int num = 69;
    float fl = 123L;
    double db = 123.365;

    rating = 'j';
    num = 22;
    fl = 123.4;
    db = 123.11L;

    char nums[2];
    nums[0] = 'j';
    nums[1] = 'k';

    cout << "Hello, World!" << endl;
    cout << nums[0] << nums[1] << endl;
    return 0;
}