//
//  cppwrapper.c
//  SwiftCppCallTest
//
//  Created by Masatoshi Hidaka on 2022/05/11.
//

#include "cppwrapper.h"
#include "cppsource.hpp"

void* addcpp_create() {
    return new AddCpp();
}
void addcpp_add(void* obj, int v) {
    AddCpp* p = (AddCpp*)obj;
    p->add(v);
}
int addcpp_get_sum(void* obj) {
    AddCpp* p = (AddCpp*)obj;
    return p->get_sum();
}
