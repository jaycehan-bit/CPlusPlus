//
//  JCMouse.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include <iostream>
#include "JCMouse.hpp"

void JCMouse::input() {
    std::cout << "-[JCMouse input]" << std::endl;
}

JCMouse::JCMouse(const JCMouse &mouse) {
    ptr = new int;
    *ptr = *mouse.ptr;
    brand = mouse.brand;
}

JCMouse::JCMouse() {
    
}
