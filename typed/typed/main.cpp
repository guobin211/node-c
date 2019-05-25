//
//  main.cpp
//  typed
//
//  Created by 郭斌 on 2019/5/25.
//  Copyright © 2019 guobin. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>

// 命名空间
using namespace std;
// 定义常量
#define HD_NAME 'M';
const int YEAR = 2019;

// function 必须先声明
void sayHello(string name) {
    cout << "hello function " << name << " in "<< YEAR << "\n";
}

double payMoney(float price, int nums) {
    return price * nums;
}

int getMax(int a, int b) {
    return a > b ? a : b;
}

class Book {
public:
    string title;
    string author;
    int pages;
    //  构造函数
    Book(string aTitle) {
        cout << "父类 Book construct \n";
        title = aTitle;
        created = 20190528;
    }
    string toString() {
        return "{title:\"" + title + "\", authon:\""+ author +"\", pages:" + to_string(pages) +", created:" + to_string(created) + "}";
    }
private:
    int created;
};
// 继承
class MathBook: public Book {
public:
    // 子类构造函数要实现父类构造函数
    MathBook(): Book("MathBook"){
        cout << "子类 MathBook construct \n";
    }
    string toString() {
        return "MathBook \n";
    }
};

int main(int argc, const char * argv[]) {
    
    string today = "today is a nice day";
//  创建文件
    ofstream writer("today.txt");

    if (! writer) {
        cout << "Error Open File";
        return -1;
    } else {
        // 写入string
        writer << today;
        writer.close();
        cout << "写入成功 \n";
    }
    
    char letter;
    ifstream reader("today.txt", ios::app);
    if (! reader) {
        cout << "Error Open File";
        return -1;
    } else {
        // 读取txt
        for (int i = 0; !reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        cout << "读取成功 \n";
        reader.close();
    }
    
    
    MathBook mathBook;
    
    cout << mathBook.toString();
    cout << mathBook.title << "\n";
    
    Book book("c语言");
    book.title = "c++";
    book.pages = 24;
    book.author = "jack";
    
    string bookObj = book.toString();
    
    cout << bookObj << "\n";
    
    cout << book.title;
    
    int copyYear = YEAR;
    
    cout << copyYear;
    
    int sortNums[] = {2,4,6,8,10,1,3,5,7,9};
    
    for (int i = 0; i < 10; i++) {
        cout << sortNums[i] <<"\n";
    }
    
    int resNum = getMax(3,4);
    cout << resNum << "\n";
    
    cout << HD_NAME;
    
    sayHello("sayHello");
    
    double res = payMoney(4.5, 10);
    cout << "pay money:" << res <<"\n";
    
    // 基本数据类型
    string name = "jack johnson";
    int age = 22;
    char city[4] = "USA";
    float rating = 66.5;
    double money = 1196.4562;
    bool man = true;
    // 输出
    cout << "Hello, World!\n";
    cout << "his name is: "<< name <<"\n";
    cout << "his age is: "<< age <<"\n";
    cout << "his coming from: "<< city <<"\n";
    cout << "his rating is: "<< rating <<"\n";
    cout << "his money is: "<< money <<"\n";
    
    if (man) {
        cout << "he is Man\n";
    } else{
        cout << "he is Women\n";
    }
    // string.find 查找索引 0 第一个匹配的
    cout << name.find("john", 0) << "\n";
    
    cout << 10 / 3 << "\n";
    cout << 10 - 9.5 << "\n";
    cout << float(10.36) << "\n";
    cout << pow(2, 3) << "\n";
    cout << round(4.6) << "\n";
    cout << ceil(3.4) << "\n";
    cout << max(10.36, 11.21) << "\n";
    
    //    int my_age;
    //    string my_name;
    //
    //    cout << "Enter your age: ";
    //    cin >> my_age;
    //
    //    cout << "Enter your name: ";
    //
    //    getline(cin, my_name);
    //
    //    cout << "Your name is: "<< my_name << "Your age is: " << my_age << "\n";
    
    return 0;
}


