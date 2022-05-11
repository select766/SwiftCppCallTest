//
//  cppsource.cpp
//  SwiftCppCallTest
//
//  Created by Masatoshi Hidaka on 2022/05/11.
//

#include "cppsource.hpp"

AddCpp::AddCpp(): sum(0) {
}

void AddCpp::add(int v) {
    sum += v;
}

int AddCpp::get_sum() {
    return sum;
}
