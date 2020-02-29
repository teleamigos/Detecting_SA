//
//  Receiver_Node.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/29/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include "Receiver_Node.hpp"
/*Constructors*/
Receiver_Node::Receiver_Node(Node nodo):ThisNode(nodo)
{
    //Exceptions
}
Receiver_Node::Receiver_Node(Node nodo,vector<string> ids,vector<string> rssi): ThisNode(nodo),ID_List(ids),RSSI_list(rssi)
{
    //Exceptions
}
/*Getters*/
Node Receiver_Node::GetThisNode()const
{
    return this->ThisNode;
}
vector<string> Receiver_Node::GetIDList()const
{
    return this->ID_List;
}
vector<string> Receiver_Node::GetRSSIList()const
{
    return this->RSSI_list;
}
/*Setters*/
void Receiver_Node::SetIDList(vector<string> ids)
{
    this->ID_List=ids;
}
void Receiver_Node::SetRSSIList(vector<string> rssi)
{
    this->RSSI_list=rssi;
}
/*Methods*/
void Receiver_Node::Unpack(string message_received)
{
    //No implementado aun...
    /*
    String con formato :
     1 .- ID 1 byte
     2 .- Tipo de mensaje 1 byte
     3.-  RSSI recibido 4 bytes
    */
    
}
