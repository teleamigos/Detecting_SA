//
//  Node.hpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

class Node{
private:
    int ID=0;
    std::vector<int> neighboor{1};
public:
    Node()=default;
    Node(int id,std::vector<int> _neighboor);
    Node(const Node &nodo);
    int GetID()const;
    std::vector<int> GetNeighboors()const;
    void SetID(int id);
    void SetNeighboors(std::vector<int> v);
};

#endif /* Node_hpp */
