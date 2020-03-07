//
//  Receiver_Node.hpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/29/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#ifndef Receiver_Node_hpp
#define Receiver_Node_hpp
/*-----------------------------------------------------------------------------------------------------
                                class Receiver_Node definition
-----------------------------------------------------------------------------------------------------*/
#include <string>
#include <vector>
#include <iostream>
#include "Node.hpp"

using namespace std;
class Receiver_Node
{
private:
    Node ThisNode;
    const vector<float> range_tol{0.3961,2.4005,4.0208,0.9637,1.0804,1.3518,2.1859,1.301};
    /*Range of tol                0.20    0.40    1      2      4     8       16     32*/
    vector<uint8_t> ID_List;
    vector<float> RSSI_list;
    vector<float> NSR;
    vector<vector<uint8_t>> ID_detected;
public:
    /*Constructors*/
    Receiver_Node()=default;
    Receiver_Node (Node nodo);
    Receiver_Node(Node nodo,vector<uint8_t> ids,vector<float> rssi);
    /*Getters*/
    Node GetThisNode()const;
    vector<uint8_t> GetIDList()const;
    vector<float> GetRSSIList()const;
    vector<vector<uint8_t>> GetID_detected()const;
    /*Setters*/
    //void SetThisNode(Node nodo);
    void SetIDList(vector<uint8_t> ids);
    void SetRSSIList(vector<float> rssi);
    /*Methods*/
    void Unpack(uint8_t ID,uint8_t type, float RSSI,float NSR);//Unpack information
    void Print_List();//print the list of messages with RSSI
    void Discard();//Algortihm to disrcard bad nodes...
    void Print_ID_detected()const;
};

#endif /* Receiver_Node_hpp */
