//
//  main.cpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#include <iostream>
#include "Node.hpp"
#include <vector>
#include <string>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"this is a main test..."<<std::endl;
    std::cout<<"Create a packet to send through LoRa"<<std::endl;
    std::string ID,MAC;
    ID="1";
    MAC="c8:e0:eb:38:c8:d3 ";
    Node n(ID,MAC);
    n.Pack();
    std::cout<<"The packet is : "<<n.GetPacket()<<std::endl;
    return 0;
}
