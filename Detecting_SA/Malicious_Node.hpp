//
//  Malicious_Node.hpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/19/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#ifndef Malicious_Node_hpp
#define Malicious_Node_hpp
/*-----------------------------------------------------------------------------------------------------
                                class Malicious_Node definition
-----------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <iostream>
#include "Node.hpp"
#include <vector>
#include <string>
#endif /* Malicious_Node_hpp */

class Malicious_Node: public Node
{
private:
    size_t N_id;//Number of IDs
    std::vector<std::string> Fake_ids;
public:
    /*Constructors*/
    Malicious_Node()=default;
    Malicious_Node(size_t N,std::vector<std::string> ids);
    /*Getters*/
    size_t GetNID()const;
    std::vector<std::string> GetFakeIDs()const;
    /*Setters*/
    void SetNID(size_t N);
    void SetFakeIDs(std::vector<std::string> ids);
    /*Methods*/
    void AddID(std::string id);
    std::vector<std::string> Make_FakedID();
    void Print()const;
};
