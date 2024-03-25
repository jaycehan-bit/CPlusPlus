//
//  JCTemplate.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/25.
//

#include "JCTemplate.hpp"

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T &a, T &b, int index) {
    T temp;
    for (int i = 0; i < index; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

template <> void swap<Job> (Job & job1, Job & job2) {
    double salary = job1.salary;
    job1.salary = job2.salary;
    job2.salary = salary;
    
    int floor = job1.floor;
    job1.floor = job2.floor;
    job2.floor = floor;
}
