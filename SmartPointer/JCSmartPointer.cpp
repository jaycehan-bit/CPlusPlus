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

/*
 智能指针：unique_ptr是一个模版类，定义了类似指针的对象，用于管理动态内存分配的用法。
 将new获得的地址赋给对象，当对象过期时，其析构函数会调用delete来释放内存。
 只能把new分配的内存赋值给智能指针，不能把栈上的对象地址赋值给智能指针。
 
 Q1:将两个智能指针指向同一个地址
 - 定义赋值操作符，执行深拷贝
 - 建立所有权。对于特定对象，只能有一个智能指针可以拥有它。智能指针的析构函数只能删除该智能指针拥有的对象。还需让赋值操作转让所有权。
 - 实现更高级的智能指针。跟踪指定对象的智能指针数量，即‘引用计数’。只有当所有智能指针都过期时才执行delete方法。
*/
