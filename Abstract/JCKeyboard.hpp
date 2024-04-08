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
    JCKeyboard(bool enable, bool wired);
    ~JCKeyboard();
    void input();
private:
    bool enable;
    bool isWired;
};

#endif /* JCKeyboard_hpp */
