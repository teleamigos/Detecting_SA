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
Receiver_Node::Receiver_Node(Node nodo,vector<uint8_t> ids,vector<float> rssi): ThisNode(nodo),ID_List(ids),RSSI_list(rssi)
{
    //Exceptions
}
/*Getters*/
Node Receiver_Node::GetThisNode()const
{
    return this->ThisNode;
}
vector<uint8_t> Receiver_Node::GetIDList()const
{
    return this->ID_List;
}
vector<float> Receiver_Node::GetRSSIList()const
{
    return this->RSSI_list;
}
/*Setters*/
void Receiver_Node::SetIDList(vector<uint8_t> ids)
{
    this->ID_List=ids;
}
void Receiver_Node::SetRSSIList(vector<float> rssi)
{
    this->RSSI_list=rssi;
}
/*Methods*/
void Receiver_Node::Unpack(uint8_t ID,uint8_t type, float RSSI,float NSR)
{
    //No implementado aun...
    /*
    String con formato :
     1 .- ID 1 byte
     2 .- Tipo de mensaje 1 byte
     3.-  RSSI recibido 4 bytes
    */
    this->ID_List.push_back(ID);
    this->RSSI_list.push_back(RSSI);
    this->NSR.push_back(NSR);
}

void Receiver_Node::Print_List()
{
    /*print method*/
    int i;
    for (i=0;i<this->ID_List.size();i++)
    {
    cout<<i+1<<"ID :"<<this->ID_List.at(i)<<"RSSI : "<<this->RSSI_list.at(i)<<endl;
    }
}

void Receiver_Node::Discard()
{
  /*Discard algorithm */
    int i,j,c;
    size_t tam;
    vector<uint8_t> ids;
    bool aux;
    for (i=0;i<this->ID_List.size();i++)
    {
        aux=false;
        if(ids.size()==0)
        {
            ids.push_back(this->ID_List.at(i));
            
        }
        else
        {
            tam=ids.size();
            for(j=0;j<tam;j++)
            {
                if(this->ID_List.at(i)==ids.at(j))
                {
                    aux=true;
                }
            }
        }
    }
}
