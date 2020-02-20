//
//  Malicious_Node.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/19/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include "Malicious_Node.hpp"

/*-----------------------------------------------------------------------------------------------------
                                     class Node implementation
-----------------------------------------------------------------------------------------------------*/
/*Constructors*/

Malicious_Node::Malicious_Node(size_t N,std::vector<std::string> ids):N_id(N),Fake_ids(ids)
{
    //Exceptions
}

/*Getters*/

size_t Malicious_Node::GetNID()const
{
    return this->N_id;
}

std::vector<std::string> Malicious_Node::GetFakeIDs()const
{
    return this->Fake_ids;
}

/*Setters*/

void Malicious_Node::SetNID(size_t N)
{
    this->N_id=N;
}

void Malicious_Node::SetFakeIDs(std::vector<std::string> ids)
{
    this->Fake_ids=ids;
}

/*Methods*/

void Malicious_Node::AddID(std::string id)
{
    //add id
    this->Fake_ids.insert(this->Fake_ids.begin(), id);
    this->N_id=this->Fake_ids.size();
}
std::vector<std::string> Malicious_Node::Make_FakedID()
{
    int i =0;
    std::string MAC="c8:e0:eb:38:c8:d3 ";
    std::vector<std::string> packets;
    std::string p;
    for (i=0;i<this->Fake_ids.size();i++)
    {
        SetID(this->Fake_ids.at(i));
        SetMac_add(MAC);
        Pack();
        p=GetPacket();
        packets.insert(packets.begin(),p);
    }
    return packets;
}
void Malicious_Node::Print()const
{
    int i=0;
    std::cout<<"currently number of fake ids : "<<GetNID()<<std::endl;
    std::cout<<"Fake nodes : "<<std::endl;
    for (i=0;i<this->Fake_ids.size();i++)
    {
        std::cout<<this->Fake_ids.at(i)<<std::endl;
    }
}
