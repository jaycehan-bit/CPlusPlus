//
//  JCStack.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/9.
//

#ifndef JCStack_hpp
#define JCStack_hpp

#include <stdio.h>
#include <vector>

template <class T>

class Stack {

private:
    std::vector<T> objects;
    
public:
    void push(T const&);
    T pop() const;
    T lastObject() const;
    bool isEmpty() const;
    uint count() const;
};

#endif /* JCStack_hpp */
