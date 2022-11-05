#include <iostream>
#include "SupplyUnit.h"
#include "SupplyIterator.h"
#include "Supply.h"

// Still need to include a SupplyIterator

using namespace std;

int main(){

    SupplyUnit<int>* myQueue = new SupplyUnit<int>();//change to type Supply

    //Supply *m = new Supply(10,20,10);
    SupplyUnit<Supply>* myQueueInfantrys = new SupplyUnit<Supply>();//change to type Supply
    Supply* m = new Supply(10, 20, 10);
    Supply* n = new Supply(20, 30, 20);
    Supply* o = new Supply(30, 40, 30);
    Supply* p = new Supply(40, 50, 40);

    m->print();
    n->print();
    o->print();
    p->print();

    myQueueInfantrys->enqueue(*m);
    myQueueInfantrys->enqueue(*n);
    myQueueInfantrys->enqueue(*o);
    myQueueInfantrys->enqueue(*p);

    myQueue->enqueue(10);
    myQueue->enqueue(20);
    myQueue->enqueue(30);
    myQueue->enqueue(40);

    while (!myQueue->isEmpty())
        cout<<myQueue->dequeue()<<"\t";
    cout<<endl;
    myQueue->enqueue(10);
    myQueue->enqueue(20);
    myQueue->enqueue(30);
    myQueue->enqueue(5);
    
    myQueue->dequeue();
    myQueue->enqueue(50);
    
//    SupplyIterator<int> i;
//    for (i = myQueue->begin(); !(i == myQueue->end()); ++i)
//        cout<<*i<<"\t";
//    i->print();

    SupplyIterator<Supply> i;
    for (i = myQueueInfantrys->begin(); !(i == myQueueInfantrys->end()); ++i)
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    return 0;
}
