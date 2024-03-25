//
//  JCConst.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include <iostream>
#include "JCConst.hpp"

// const修饰的成员变量需要在构造函数中显式初始化
JCConst::JCConst(int num, const int *var, int * const point): immutable(num), variable(var), immutable_point(point) {
    text = "jaycehan";
}

JCConst::~JCConst() {
    
}

std::string JCConst::description(const JCConst *const_ptr) {
    std::string description = std::to_string(immutable) + std::to_string((intptr_t)variable) + std::to_string((intptr_t)immutable_point);
    return description;
}

const char &JCConst::operator[](std::size_t position) const {
    return text[position];
}

char &JCConst::operator[](std::size_t position) {
    return text[position];
}

const char & JCTextBlock::operator[](std::size_t position) const {
    return text[position];
}

char & JCTextBlock::operator[](std::size_t position) {
    return text[position];
}

JCTextBlock::JCTextBlock(std::string text) {
    this->text = text;
}

void JCTextBlock::description() {
    std::cout << text << std::endl;
}

void JCTextBlock::description() const {
    std::cout << "<const function>" << text << std::endl;
}
