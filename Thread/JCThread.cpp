//
//  JCThread.cpp
//  CPlusPlus
//
//  Created by jaycehan on 2024/4/9.
//

#include <pthread/pthread.h>
#include <thread>
#include <iostream>
#include <semaphore>
#include "JCThread.hpp"

struct Thread_Data {
    int thread_id;
    const char *pay_load;
    void (*call_back)(const int, const char *);
};

void *multiThreadFunction(void *args) {
    Thread_Data *thread_data;
    thread_data = (Thread_Data *)args;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    if (thread_data->call_back != nullptr) {
        thread_data->call_back(thread_data->thread_id, thread_data->pay_load);
    }
    return nullptr;
}

void completeCallBack(const int thread_id, const char *pay_load) {
    std::cout << "Thread_ID: " << thread_id << ", Payload: " << pay_load <<std::endl;
}

void JCThread::run() {
    Thread_Data thread_data;
    thread_data.thread_id = 1;
    thread_data.pay_load = "This is a payload";
    thread_data.call_back = &completeCallBack;
    pthread_t thread = nullptr;
    pthread_create(&thread, NULL, multiThreadFunction, (void *)&thread_data);
}

