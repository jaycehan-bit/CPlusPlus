//
//  JCBaseInterface.h
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/22.
//

#ifndef JCBaseInterface_h
#define JCBaseInterface_h

#include <iostream>
#include <map>

class JCBaseInterface {
    
public:
    
    virtual void run(std::map<int, std::string>) = 0;
    
    virtual void operate() {
        std::cout << "[JCBaseInterface] operate" << std::endl;
    }
    
};


#endif /* JCBaseInterface_h */
