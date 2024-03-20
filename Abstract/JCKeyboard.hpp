//
//  JCKeyboard.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#ifndef JCKeyboard_hpp
#define JCKeyboard_hpp

#include <stdio.h>
#include "Input.hpp"

class JCKeyboard : virtual Input {
    
public:
    JCKeyboard();
    ~JCKeyboard();
    void input();
};

#endif /* JCKeyboard_hpp */
