//
//  Node.hpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
/*-----------------------------------------------------------------------------------------------------
                                     class Node definition
-----------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

class Node{
private:
    int ID=0;
    std::vector<int> neighboor{1};
    //std::string MAC_add;
public:
    /*Constructors*/
    Node()=default;
    Node(int id,std::vector<int> _neighboor);
    Node(const Node &nodo);
    /*Get*/
    int GetID()const;
    std::vector<int> GetNeighboors()const;
    /*Set*/
    void SetID(int id);
    void SetNeighboors(std::vector<int> v);
    /*Methods*/
    /* void Sender(uint package);*/
};

#endif /* Node_hpp */
