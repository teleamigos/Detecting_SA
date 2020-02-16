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
Node::Node(int id,std::vector<int> _neighboor):ID(id),neighboor(_neighboor)
{
    //Exceptions
}

Node::Node(const Node &nodo){
    this->ID=nodo.ID;
    this->neighboor=nodo.neighboor;
}
/*Get*/
int Node::GetID()const
{
    return this->ID;
}

std::vector<int> Node::GetNeighboors()const
{
    return this->neighboor;
}
/*Set*/
void Node::SetID(int id)
{
    this->ID=id;
}

void Node::SetNeighboors(std::vector<int> v)
{
    this->neighboor=v;
}

