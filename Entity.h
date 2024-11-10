//
// Created by barbulescuv on 10/28/2024.
//

#ifndef ENTITY_H
#define ENTITY_H
#include "Person.h"


class Entity {
public:
    virtual ~Entity() = default;
    virtual void interact(Person* p) = 0;
    virtual void printSelf() = 0;
};



#endif //ENTITY_H
