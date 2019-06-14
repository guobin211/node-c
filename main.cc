#include<iostream>
#include<string>

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

    char nums[4];
    nums[0] = 'j';
    nums[1] = 'a';
    nums[2] = 'c';
    nums[3] = 'k';
    
    string name;
    name = nums;
    name = "jack";
    cout << name << endl;
    return 0;
}
