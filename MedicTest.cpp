#include <iostream>
#include "MedicUnit.h"
#include "MedicIterator.h"
#include "Medic.h"

// Still need to include a MedicIterator

using namespace std;

int main(){

    MedicUnit<int>* myQueue = new MedicUnit<int>();//change to type medic

    //Medic *m = new Medic(10,20,10);
    MedicUnit<Medic>* myQueueMedics = new MedicUnit<Medic>();//change to type medic
    Medic* m = new Medic(10,20,10);
    Medic* n = new Medic(20,30,20);
    Medic* o = new Medic(30,40,30);
    Medic* p = new Medic(40,50,40);

    m->print();
    n->print();
    o->print();
    p->print();

    myQueueMedics->enqueue(*m);
    myQueueMedics->enqueue(*n);
    myQueueMedics->enqueue(*o);
    myQueueMedics->enqueue(*p);

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
    
//    MedicIterator<int> i;
//    for (i = myQueue->begin(); !(i == myQueue->end()); ++i)
//        cout<<*i<<"\t";
//    i->print();

    MedicIterator<Medic> i;
    for (i = myQueueMedics->begin(); !(i == myQueueMedics->end()); ++i)
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    return 0;
}
