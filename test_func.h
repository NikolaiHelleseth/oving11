#pragma once
#include <vector>
#include <iostream>
#include "stopwatch.h"

// ==============================
// oppgave 2 tester 

const std::vector<int> vector_test(const int num);
const std::vector<int> vector_test_resize(const int num);
void print_vec(const std::vector<int> &vec);


template<typename Func, typename... Args>
void time(const int n, Func func, Args... args){
    Stopwatch clock;
    clock.start();
    for(int i = 0; i<n; i++){
        func(args...);
    }
    double total = clock.stop();
    std::cout << "time: " << total/n << std::endl; 
}

