//
//  JCConst.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include "JCConst.hpp"

// const修饰的成员变量需要在构造函数中显式初始化
JCConst::JCConst(int num, const int *var, int * const point): immutable(num), variable(var), immutable_point(point) {

}

JCConst::~JCConst() {
    
}

std::string JCConst::description(const JCConst *const_ptr) {
    std::string description = std::to_string(immutable) + std::to_string((intptr_t)variable) + std::to_string((intptr_t)immutable_point);
    return description;
}

