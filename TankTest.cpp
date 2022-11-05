#include <iostream>
#include "TankUnit.h"
#include "TankIterator.h"
#include "Tank.h"

// Still need to include a TankIterator

using namespace std;

int main(){

    TankUnit<int>* myQueue = new TankUnit<int>();//change to type tank

    //Tank *m = new Tank(10,20,10);
    TankUnit<Tank>* myQueuetanks = new TankUnit<Tank>();//change to type tank
    Tank* m = new Tank("54");
    Tank* n = new Tank("54A");
    Tank* o = new Tank("59");
    Tank* p = new Tank("40");

    m->print();
    n->print();
    o->print();
    p->print();

    myQueuetanks->enqueue(*m);
    TankIterator<Tank> i;
    for (i=myQueuetanks->first(); !(i==myQueuetanks->end()); i=i.next())
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    cout <<endl;

    myQueuetanks->enqueue(*n);
    myQueuetanks->enqueue(*o);
    myQueuetanks->enqueue(*p);



    WHere ARE YOU !!!
    
//    TankIterator<int> i;
//    for (i = myQueue->begin(); !(i == myQueue->end()); ++i)
//        cout<<*i<<"\t";
//    i->print();

    //TankIterator<Tank> i;
    for (i=myQueuetanks->first(); !(i==myQueuetanks->end()); i=i.next())
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    cout<<endl;

    for (i=myQueuetanks->end(); !(i==myQueuetanks->first()); i=i.prev())
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    cout<<endl;
    return 0;
}
