//
//  JCConst.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/3/20.
//

#ifndef JCConst_hpp
#define JCConst_hpp

#include <stdio.h>
#include <string>

class JCConst {
    
public:
    JCConst(int num, const int *var, int * const point);
    ~JCConst();
    std::string description(const JCConst *const_ptr);
    
    const char &operator[](std::size_t position) const;
    
    char &operator[](std::size_t position);
private:
    int const immutable;
    // 常量指针。指向常量的指针，不能修改所指对象的值
    const int *variable;
    // 指针常量。指针指向的地址不能修改，但可以修改所指内存的值
    int * const immutable_point;
    
    std::string text;
};


class JCTextBlock {
public:
    JCTextBlock(std::string text);
    
    const char & operator[](std::size_t position) const;
    
    char & operator[](std::size_t position);
    
    void description();
    
    void description() const;
    
private:
    std::string text;
};

#endif /* JCConst_hpp */
