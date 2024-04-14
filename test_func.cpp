#include "test_func.h"
#include <vector>
#include <iostream>
#include "Stopwatch.h"



using namespace std;


// =======================================================================
// tester hvor lang tid det tar legg inn inn fuksjonen midt i for løkken 
// n(iterations)
const std::vector<int> vector_test(const int num){
    std::vector<int> vec; 
    vec.reserve(1'000'000);
    cout << "size()" << "\t" << "capacity()" << endl; 
    for(int i=0; i<num; i++){
        vec.push_back(i); 
        cout << vec.size(); 
        cout << "\t" << vec.capacity() << endl; 
    }
    return vec;
}

const std::vector<int> vector_test_resize(const int num){
    std::vector<int> vec; 
    vec.resize(1'000'000);
    cout << "size()" << "\t" << "capacity()" << endl; 
    for(int i=0; i<num; i++){
        vec[i] = i; 
        cout << vec.size(); 
        cout << "\t" << vec.capacity() << endl; 
    }
    return vec; 
}

void print_vec(const vector<int> &vec){
    for(auto& item : vec){
        std::cout <<item << endl; 
    }
    
}


