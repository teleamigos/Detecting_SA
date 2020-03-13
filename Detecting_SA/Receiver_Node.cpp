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
vector<vector<uint8_t>> Receiver_Node::GetID_detected()const
{
    return this->ID_detected;
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
    int i,j;
    size_t tam;
    vector<uint8_t> ids;//it storages only IDs who sent Hello message
    vector<float> dif_rssi; //It storages rssi averages for each ID
    bool aux;
    float next_rssi,dif,prom,rssi;
    
    for (i=0;i<this->ID_List.size();i++)
    {
        /*Resume ID list*/
        aux=false;
        if(ids.size()==0)
        {
            /*If is empty, add the first id*/
            ids.push_back(this->ID_List.at(i));
            
        }
        else
        {
            /*In other way, find the currently ID in the list and only add it if it is not yet*/
            tam=ids.size();
            for(j=0;j<tam;j++)
            {
                if(this->ID_List.at(i)==ids.at(j))
                {
                    aux=true;
                }
            }
            if(aux==false)
            {
                ids.push_back(this->ID_List.at(i));
            }
        }
    }
    for (i=0;i<this->RSSI_list.size();i++)
    {
        dif=0;
        if(i % 2 ==0)
        {
            next_rssi=this->RSSI_list.at(i+1);
            dif=this->RSSI_list.at(i)-next_rssi;
            dif_rssi.push_back(dif);
        }
    }
    rssi=0;
    for(i=0;i<dif_rssi.size();i++)
    {
        rssi+=dif_rssi.at(i);
    }
    prom=rssi/dif_rssi.size();
    if(prom<this->range_tol.at(0))
    {
        //This node is real
    }
    else
    {
        //this node is fake!
    }
}

void Receiver_Node::Print_ID_detected()const
{
    /*print*/
    int i;
    for(i=0;i<this->ID_detected.size();i++)
    {
        //
    }
}
