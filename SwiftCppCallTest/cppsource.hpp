//
//  cppsource.hpp
//  SwiftCppCallTest
//
//  Created by Masatoshi Hidaka on 2022/05/11.
//

#ifndef cppsource_hpp
#define cppsource_hpp

#include <stdio.h>


class AddCpp {
public:
    AddCpp();
    void add(int v);
    int get_sum();
private:
    int sum;
};

#endif /* cppsource_hpp */
