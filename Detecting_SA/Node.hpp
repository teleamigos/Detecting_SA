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
    std::string ID;
    //std::vector<int> neighboor{1};
    std::string MAC_add;
    std::string packet;
public:
    /*Constructors*/
    Node()=default;
    Node(std::string id,std::string MAC);
    Node(std::string id,std::string MAC,std::string p);//three arguments
    Node(const Node &nodo);
    /*Get*/
    std::string GetID()const;
    //std::vector<int> GetNeighboors()const;
    std::string GetMAC_add()const;
    std::string GetPacket()const;
    /*Set*/
    void SetID(std::string id);
    //void SetNeighboors(std::vector<int> v);
    void SetMac_add(std::string mac);
    void SetPacket(std::string p);
    /*Methods*/
    void Pack();// Pack information...
};

#endif /* Node_hpp */
