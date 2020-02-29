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
#include "Node.hpp"

using namespace std;
class Receiver_Node
{
private:
    Node ThisNode;
    int range_tol=0.5; //Rango de toleracia para RSSI 0.5 db por defecto
    vector<string> ID_List;
    vector<string> RSSI_list;
public:
    /*Constructors*/
    Receiver_Node()=default;
    Receiver_Node (Node nodo);
    Receiver_Node(Node nodo,vector<string> ids,vector<string> rssi);
    /*Getters*/
    Node GetThisNode()const;
    vector<string> GetIDList()const;
    vector<string> GetRSSIList()const;
    /*Setters*/
    //void SetThisNode(Node nodo);
    void SetIDList(vector<string> ids);
    void SetRSSIList(vector<string> rssi);
    /*Methods*/
    void Unpack(string message_received);//Unpack information
    void Print_List();//print the list of messages with RSSI
    void Discard();//Algortihm to disrcard bad nodes...
};

#endif /* Receiver_Node_hpp */
