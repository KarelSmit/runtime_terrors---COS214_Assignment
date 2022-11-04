#include <iostream>
#include "InfantryUnit.h"
#include "InfantryIterator.h"
#include "Infantry.h"

// Still need to include a InfantryIterator

using namespace std;

int main(){

    InfantryUnit<int>* myQueue = new InfantryUnit<int>();//change to type Infantry

    //Infantry *m = new Infantry(10,20,10);
    InfantryUnit<Infantry>* myQueueInfantrys = new InfantryUnit<Infantry>();//change to type Infantry
    Infantry* m = new Infantry("10", 20, 10);
    Infantry* n = new Infantry("20", 30, 20);
    Infantry* o = new Infantry("30", 40, 30);
    Infantry* p = new Infantry("40", 50, 40);

    m->print();
    n->print();
    o->print();
    p->print();

    myQueueInfantrys->enqueue(*m);
    myQueueInfantrys->enqueue(*n);
    myQueueInfantrys->enqueue(*o);
    myQueueInfantrys->enqueue(*p);

    
//    InfantryIterator<int> i;
//    for (i = myQueue->begin(); !(i == myQueue->end()); ++i)
//        cout<<*i<<"\t";
//    i->print();

    InfantryIterator<Infantry> i;
    for (i = myQueueInfantrys->begin(); !(i == myQueueInfantrys->end()); ++i)
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    return 0;
}
