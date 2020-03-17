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
    uint8_t id=0x01;
    vector<uint8_t> iden{0x01,0x03};
    uint8_t type=0x00;
    Node n (id,type);
    int i;
    Malicious_Node x;
    vector<vector<uint8_t>> pack;
    Receiver_Node m(n);
    vector<uint8_t> ids{0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03,0x02,0x03};
    vector<float> rssi{-3.5,-2.1,-3.6,-3.9,-3.6,-2.9,-4.5,-10.9,-1.5,-2.9};
    /*code*/
    x.AddFakeID(iden.at(0));
    x.AddFakeID(iden.at(1));
    pack=x.Create_pack();
    m.SetIDList(ids);
    m.SetRSSIList(rssi);
    m.Discard();
    for (i=0;i<pack.size();i++)
    {
        cout<<pack.at(i).at(0)<<pack.at(i).at(1)<<endl;
    }
    return 0;
}
