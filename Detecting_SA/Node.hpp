//
//  Node.hpp
//  Detecting_SA
//
//  Created by Jorge Orlando Gonzalez  on 2/16/20.
//  Copyright © 2020 Jorge Orlando Gonzalez . All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
/*-----------------------------------------------------------------------------------------------------
                                     class Node definition
-----------------------------------------------------------------------------------------------------*/
#include <string>
using namespace std;
class Node{
private:
    unsigned char ID; //1 byte para el 1d
    unsigned char type_m='0'; //Mesnaje hello (1 byte)
    string pack; // guarda en 2 bytes
public:
    /*Constructors
     Construyen la clase de 3 diferentes formas:
     1.- por defecto (como se inicilizan los miembros de la clase)
     2.- Pasando dos argumentos ID y el tipo de mensaje
     3.- Pasando otro objecto de la clase Node*/
    Node()=default;
    Node(unsigned char id,unsigned char type);
    Node(const Node &nodo);
    /*Destructor
     Destruye la clase*/
    ~Node()=default;
    /*Get
     Nos permite obtener datos los miembros de la clase*/
    unsigned char GetID()const;
    unsigned char GetTypeM()const;
    string GetPack()const;
    /*Set
     Nos permite modificar el contenido de los datos miembro*/
    void SetID(unsigned char id);
    void SetTypeM(unsigned char type);
    void SetPack(string p);
    /*Methods
     Empaqueta ID y tipo en una variable*/
    void Pack();// Pack information...
    void Clear_pack();
};

#endif /* Node_hpp */
