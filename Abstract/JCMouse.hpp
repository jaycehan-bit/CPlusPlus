//
//  JCMouse.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#ifndef JCMouse_hpp
#define JCMouse_hpp

#include <stdio.h>
#include <string.h>
#include "Input.hpp"

class JCMouse {
public:
    // 拷贝构造函数
    JCMouse(const JCMouse &mouse);
    void input();
    
private:
    std::string brand;
    int *ptr;
};

#endif /* JCMouse_hpp */
