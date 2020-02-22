//
//  Node.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//
/*-----------------------------------------------------------------------------------------------------
                                     class Node implementation
-----------------------------------------------------------------------------------------------------*/
#include "Node.hpp"
#include <vector>
/*Constructors*/
Node::Node(unsigned char id,unsigned char type): ID(id),type_m(type)
{
        //Exceptions
}
Node::Node(const Node &nodo)
{
    this->ID=nodo.ID;
    this->type_m=nodo.type_m;
}
/*Get*/
unsigned char Node::GetID()const
{
    return this->ID;
}
unsigned char Node::GetTypeM()const
{
    return this->type_m;
}
string Node::GetPack()const
{
    return this->pack;
}
/*Set*/
void Node::SetID(unsigned char id)
{
    this->ID=id;
}
void Node::SetTypeM(unsigned char type)
{
    this->type_m=type;
}
void Node::SetPack(string p)
{
    this->pack=p;
}
/*Methods*/
void Node::Pack()
{
    this->pack.push_back(this->type_m);
    this->pack.push_back(this->ID);
}
