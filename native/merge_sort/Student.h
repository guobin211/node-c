//
// Created by 郭斌 on 2019-06-05.
//

#ifndef NODE_C_STUDENT_H
#define NODE_C_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int score;
    // < 操作符重载
    bool operator<(const Student &otherStudent){
        return score != otherStudent.score ? score < otherStudent.score : name < otherStudent.name;
    }
    // << 操作符重载
    friend ostream& operator<<(ostream &os, const Student &student){
        os<<"Student: { name : \"" << student.name<< "\", age: "<< student.score << " }" << endl;
        return os;
    }
};

#endif //NODE_C_STUDENT_H
