//
//  JCKeyboard.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include <iostream>
#include "JCKeyboard.hpp"

void JCKeyboard::input() {
    std::cout << "-[JCKeyboard input]" << std::endl;
}
// 使用初始化列表来初始化字段
JCKeyboard::JCKeyboard(bool enable, bool wired): enable(enable), isWired(wired) {
    
}

JCKeyboard::~JCKeyboard() {
    
}
