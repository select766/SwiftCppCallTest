//
//  cppwrapper.h
//  SwiftCppCallTest
//
//  Created by Masatoshi Hidaka on 2022/05/11.
//

#ifndef cppwrapper_h
#define cppwrapper_h

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
void* addcpp_create();
void addcpp_add(void* obj, int v);
int addcpp_get_sum(void* obj);

#ifdef __cplusplus
}
#endif

#endif /* cppwrapper_h */
