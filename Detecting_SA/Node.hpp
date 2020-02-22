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
#include <string>
using namespace std;
class Node{
private:
    unsigned char ID;
    unsigned char type_m='0';
    string pack;
public:
    /*Constructors*/
    Node()=default;
    Node(unsigned char id,unsigned char type);
    Node(const Node &nodo);
    /*Destructor*/
    ~Node()=default;
    /*Get*/
    unsigned char GetID()const;
    unsigned char GetTypeM()const;
    string GetPack()const;
    /*Set*/
    void SetID(unsigned char id);
    void SetTypeM(unsigned char type);
    void SetPack(string p);
    /*Methods*/
    void Pack();// Pack information...
};

#endif /* Node_hpp */
