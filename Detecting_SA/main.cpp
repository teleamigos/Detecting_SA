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
//#include "Receiver_Node.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"this is a main test..."<<std::endl;
    std::cout<<"Create a packet to send through LoRa"<<std::endl;
    /*init*/
    uint8_t id=0x01;
    uint8_t type=0x00;
    Node n (id,type);
    /*code*/
    
    
    return 0;
}
