//
//  JCStack.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/9.
//

#include "JCStack.hpp"

template <class T>
void Stack<T>::push(T const &object) {
    objects.push_back(object);
}

template <class T>
T Stack<T>::pop() const {
    if (objects.empty()) {
        return NULL;
    }
    T lastObj = this->lastObject();
    objects.pop_back();
    return lastObj;
}

template <class T>
T Stack<T>::lastObject() const {
    if (objects.empty()) {
        return NULL;
    }
    return objects.back();
}

template <class T>
bool Stack<T>::isEmpty() const {
    return objects.empty();
}

template <class T>
uint Stack<T>::count() const {
    return objects.size();
}
