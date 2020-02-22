//
//  main.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include <iostream>
#include "Node.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"this is a main test..."<<std::endl;
    std::cout<<"Create a packet to send through LoRa"<<std::endl;
    /*init*/
    Node n;
    unsigned char ID='1';
    /*code*/
    n.SetID(ID);
    cout<<"ID's node : "<<n.GetID()<<"\n"<<"Type message : "<<n.GetTypeM()<<endl;
    n.Pack();
    cout<<"Message : "<<n.GetPack()<<endl;
    return 0;
}
