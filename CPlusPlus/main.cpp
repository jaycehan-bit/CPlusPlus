//
//  main.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#include <iostream>
#include <thread>
#include "JCKeyboard.hpp"
#include "JCMouse.hpp"
#include "JCConst.hpp"
#include "JCThread.hpp"

static void abstractMethod() {
    JCKeyboard keyboard;
    keyboard.input();
    JCMouse *mouse = new JCMouse();
    mouse->input();
}

static void constMethod() {
    int var = 1;
    JCConst const_obj = JCConst(100, &var, &var);
    const_obj.operator[](1);
    
    JCTextBlock textBlock("variable");
    // 调用 char & operator[](std::size_t position);
    textBlock[1] = 'A';
    textBlock.description();
    
    const JCTextBlock constTextBlock("const");
    // 调用 const char & operator[](std::size_t position) const;
    constTextBlock[1];
    constTextBlock.description();
}

static void threadFunction() {
    JCThread thread;
    thread.run();
}

int main(int argc, const char * argv[]) {
    abstractMethod();
    constMethod();
    threadFunction();
    while (1) {
        
    }
    return 0;
}
