//
//  JCDecltype.hpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/22.
//

#ifndef JCDecltype_hpp
#define JCDecltype_hpp

#include <stdio.h>
#include <string>
#include "JCBaseInterface.h"

class JCDecltype: public JCBaseInterface {
    
public:
    void run(std::map<int, std::string>);
    void operate();
    JCDecltype();
    ~JCDecltype();
};

#endif /* JCDecltype_hpp */
