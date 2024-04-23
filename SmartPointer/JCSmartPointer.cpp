//
//  JCSmartPointer.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/23.
//

#include <memory>
#include <string>
#include "JCSmartPointer.hpp"

using namespace std;

class JCSmartPointerModel {
    
public:
    
    int key;
    string value;
    
    JCSmartPointerModel() {
        cout << "[JCSmartPointerModel new]" << endl;
    }
    
    ~JCSmartPointerModel() {
        cout << "[JCSmartPointerModel delete] key: " << key << ", value: " << value << endl;
    }
    
    JCSmartPointerModel(const JCSmartPointerModel &model) {
        key = model.key;
        value = model.value;
    }
};

void exchange(JCSmartPointerModel &model) {
    JCSmartPointerModel *newModel = new JCSmartPointerModel();
    newModel->key = 3;
    newModel->value = "exchanged";
    model = *newModel;
    // newModel 造成内存泄漏
}

void exchange_fix_v1(JCSmartPointerModel &model) {
    JCSmartPointerModel *newModel = new JCSmartPointerModel();
    newModel->key = 3;
    newModel->value = "exchanged";
    model = *newModel;
    // 主动delete变量
    delete newModel;
}

void exchange_fix_v2(JCSmartPointerModel &model) {
    // 使用智能指针
    unique_ptr<JCSmartPointerModel> pointer (new JCSmartPointerModel());
    pointer->key = 3;
    pointer->value = "exchanged";
}

void JCSmartPointer::run(std::map<int, std::string> context) {
    JCSmartPointerModel exchangeModel = JCSmartPointerModel();
    exchangeModel.key = 2;
    exchangeModel.value = string("This is a exchange model");
    exchange_fix_v2(exchangeModel);
}

void JCSmartPointer::operate() {
    
}




