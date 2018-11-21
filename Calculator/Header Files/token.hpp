//
//  token.hpp
//  Algorithm
//
//  Created by Jack Zhao on 11/14/18.
//  Copyright © 2018 Jack Zhao. All rights reserved.
//

#ifndef token_hpp
#define token_hpp
#include <iostream>
class token {
private:
    char _type;

public:
    token(char c = 'e'): _type(c) {}
    
    
    char type() {return _type;}
    void set_type(char c) {_type = c;}
    virtual double get_val(){return 0;}
    virtual double do_math(const double& LHS, const double& RHS){return 0;}
    virtual double do_math(const double& Unary){return 0;}
    virtual std::ostream& print(std::ostream& out)const;
    
    friend std::ostream& operator << (std::ostream& out, const token* _t);
};

#endif /* token_hpp */
