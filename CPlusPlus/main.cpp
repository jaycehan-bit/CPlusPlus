//
//  main.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include <iostream>
#include "JCKeyboard.hpp"
#include "JCMouse.hpp"

static void abstractMethod() {
    JCKeyboard keyboard;
    keyboard.input();
    JCMouse *mouse = new JCMouse();
    mouse->input();
}

int main(int argc, const char * argv[]) {
    abstractMethod();
    return 0;
}
