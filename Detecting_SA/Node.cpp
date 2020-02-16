//
//  Node.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include "Node.hpp"
#include <vector>

Node::Node(int id,std::vector<int> _neighboor):ID(id),neighboor(_neighboor)
{
    //Exceptions
}

Node::Node(const Node &nodo){
    this->ID=nodo.ID;
    this->neighboor=nodo.neighboor;
}

int Node::GetID()const
{
    return this->ID;
}

std::vector<int> Node::GetNeighboors()const
{
    return this->neighboor;
}

void Node::SetID(int id)
{
    this->ID=id;
}

void Node::SetNeighboors(std::vector<int> v)
{
    this->neighboor=v;
}

