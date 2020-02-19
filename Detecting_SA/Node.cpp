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

Node::Node(std::string id,std::string MAC):ID(id),MAC_add(MAC)
{
    //Exceptions
}

Node::Node(std::string id,std::string MAC,std::string p):ID(id),MAC_add(MAC),packet(p)
{
    //Exceptions
}

Node::Node(const Node &nodo){
    this->ID=nodo.ID;
    //this->neighboor=nodo.neighboor;
    this->MAC_add=nodo.MAC_add;
    this->packet=nodo.packet;
}
/*Get*/
std::string Node::GetID()const
{
    return this->ID;
}
/*
std::vector<int> Node::GetNeighboors()const
{
    return this->neighboor;
}
*/
std::string Node::GetMAC_add()const
{
    return this->MAC_add;
}

std::string Node::GetPacket()const
{
    return this->packet;
}

/*Set*/
void Node::SetID(std::string id)
{
    this->ID=id;
}
/*
void Node::SetNeighboors(std::vector<int> v)
{
    this->neighboor=v;
}
*/
void Node::SetMac_add(std::string mac)
{
    this->MAC_add=mac;
}

void Node::SetPacket(std::string p)
{
    this->packet=p;
}

/*Methods*/

void Node::Pack()
{
    this->packet="HELLO";
    this->packet+="ID"+this->ID;
    this->packet+="MAC"+this->MAC_add;
}
