//
//  main.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include <iostream>
#include "Node.hpp"
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int> v{1,2,3};
    int a;
    int b=5;
    Node n;
    Node n1(1,v);
    Node n2(n1);
    a=n.GetID();
    std::cout<<"your ID :"<<a;
    n2.SetID(b);
    n.SetNeighboors(v);
    return 0;
}
