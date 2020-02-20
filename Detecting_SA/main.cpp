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
#include <vector>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"this is a main test..."<<std::endl;
    std::cout<<"Create a packet to send through LoRa"<<std::endl;
    /*init*/
    Node n;
    string ID="0";
    string MAC="c8:e0:eb:38:c8:d3 ";
    vector<string> ID_f{"1","2","3"};
    vector<string> packets;
    int i;
    Malicious_Node fake;
    /*code*/
    n.SetID(ID);
    n.SetMac_add(MAC);
    n.Pack();
    cout<<"The message to be sent is..."<<n.GetPacket()<<endl;
    fake.SetFakeIDs(ID_f);
    fake.AddID(ID);
    fake.Print();
    packets=fake.Make_FakedID();
    for (i=0;i<packets.size();i++)
    {
        cout<<"packet to the ID : "<<packets.at(i)<<endl;
    }
    return 0;
}
