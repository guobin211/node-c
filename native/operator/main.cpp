//
//  main.native
// 操作符重载
//

#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
public:
    /* data */
    //  s指针不可变
    char *s;

public:
    MyString(/* args */)
    {
        //  分配内存
        s = new char[1024];
        cout << "MyString" << endl;
    };
    MyString(const MyString &it)
    {
        //  构造函数
        s = new char[1024];
        memset(s, 0, 1024);
        strcpy(s, it.s);
        cout << "MyString1024" << endl;
    };
    ~MyString()
    {
        //  析构函数
        cout << "~MyString" << endl;
        delete[] s;
    };
};

int main(int argc, const char *argv[])
{
    cout << "hello operator" << endl;
    MyString s1;
    strcpy(s1.s, "hello s1");
    // 内存地址赋值
    MyString s2 = s1;

    cout << s2.s << endl;
    char c;
    // 指针不可变
    const char *d = "string-d";
    // 指针可变
    char e[10] = "string-e";
    c = 'c';
    cout << s1.s << endl;
    cout << s2.s << endl;
    return 0;
}
