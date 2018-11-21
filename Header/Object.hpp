#ifndef Object_hpp
#define Object_hpp

#include "StaticObject.hpp"

#include <iostream>
class Character;
class Object: public StaticObject {
public:
    virtual  type_object getType()=0;
    virtual void affiche(ostream&  s)=0;
    virtual int getValueObject()=0;
    virtual bool use(Character *character)=0;


};

#endif /* Object_h */
