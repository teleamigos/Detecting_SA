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
#include "Node.hpp"
#include <vector>
#include <string>
using namespace std;
class Malicious_Node: public Node
{
private:
    size_t N_identities;
    vector<char> fake_identities;
public:
    /*Constructors*/
    Malicious_Node()=default;
    Malicious_Node(size_t N,vector<char> fake_i);
    /*Getters*/
    size_t GetNID()const;
    vector<char> GetFakeID()const;
    /*Setters*/
    void SetNID(size_t N_ID);
    void SetFakeID(vector<char> fake_ID);
    /*Methods*/
    void AddFakeID(char id);
    void Send();//No sé como vergas lo vamos a usar pero aqui ta
};
#endif /* Malicious_Node_hpp */

