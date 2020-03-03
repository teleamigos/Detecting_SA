//
//  main.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include <iostream>
#include "Node.hpp"
#include "Malicious_Node.hpp"
#include "Receiver_Node.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"this is a main test..."<<std::endl;
    std::cout<<"Create a packet to send through LoRa"<<std::endl;
    /*init*/
    Node n;
    Node good_node;
    unsigned char Id='9';
    good_node.SetID(Id);
    Receiver_Node receiver(good_node);
    unsigned char ID='1';
    Malicious_Node fake;
    unsigned char ID2='2';
    unsigned char ID3='0';
    vector<string> fake_packets;
    string data;
    int i;
    /*code*/
    n.SetID(ID);
    cout<<"ID's node : "<<n.GetID()<<"\n"<<"Type message : "<<n.GetTypeM()<<endl;
    n.Pack();
    cout<<"Message : "<<n.GetPack()<<endl;
    cout<<"Faking identities..."<<endl;
    fake.AddFakeID(ID);
    fake.AddFakeID(ID2);
    fake.AddFakeID(ID3);
    fake_packets=fake.Create_pack();
    for (i=0;i<fake_packets.size();i++)
    {
        /*----------*/
        cout<<"packet \t "<<i<<" is \t "<<fake_packets.at(i)<<endl;
    }
    data="10-35";
    receiver.Unpack(data);
    receiver.Print_List();
    return 0;
}
