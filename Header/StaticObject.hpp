#ifndef StaticObject_hpp
#define StaticObject_hpp

#include "ObjectWorld.hpp"

#include <iostream>
using namespace std;
class Monstre;
class StaticObject: public ObjectWorld {
public:
      virtual type_object getType()=0;
    virtual void affiche(ostream&  s)=0;
    virtual void addMonstreObserver(Monstre *){

    }
    virtual void removeMonstreObserver(Monstre * p){

    }
    virtual void notifyMonstreObservers(){

    }
virtual ~StaticObject(){

}
};


#endif /* StaticObject_h */
