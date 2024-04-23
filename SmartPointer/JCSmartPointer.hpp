//
//  JCSmartPointer.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/23.
//

#ifndef JCSmartPointer_hpp
#define JCSmartPointer_hpp

#include <stdio.h>
#include "JCBaseInterface.h"

class JCSmartPointer: public JCBaseInterface {
    
public:
    
    void run(std::map<int, std::string>);
    
    void operate();
    
};

#endif /* JCSmartPointer_hpp */
