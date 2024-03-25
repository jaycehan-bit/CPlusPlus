//
//  JCTemplate.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/25.
//

#ifndef JCTemplate_hpp
#define JCTemplate_hpp

#include <stdio.h>

struct Job {
    char name[20];
    double salary;
    int floor;
};

// 普通模版
template <typename T>
void swap(T &a, T &b);

// 重载模版
template <typename T>
void swap(T &a, T &b, int index);

// 显式具体化
template <> void swap<Job> (Job &, Job &);

#endif /* JCTemplate_hpp */
