#include <iostream>
#include "MedicUnit.h"
#include "MedicIterator.h"
#include "Medic.h"
# include "Battalion.h"

// Still need to include a MedicIterator

using namespace std;

int main(){

    MedicUnit<int>* myQueue = new MedicUnit<int>();//change to type medic

    //Medic *m = new Medic(10,20,10);
    MedicUnit<Medic>* myQueueMedics = new MedicUnit<Medic>();//change to type medic
    Medic* m = new Medic("10",20,10);
    Medic* n = new Medic("20",30,20);
    Medic* o = new Medic("30",40,30);
    Medic* p = new Medic("40",50,40);

    m->print();
    n->print();
    o->print();
    p->print();

    myQueueMedics->enqueue(*m);
    myQueueMedics->enqueue(*n);
    myQueueMedics->enqueue(*o);
    myQueueMedics->enqueue(*p);

    
    MedicIterator<Medic> i;
    for (i = myQueueMedics->begin(); !(i == myQueueMedics->end()); ++i)
        cout<<*i<<"\t";
    cout<<*i<<"\t";
    cout<<endl;

    for (i=myQueueMedics->first(); !(i==myQueueMedics->end()); i=i.next())
        cout<<*i<<"\t";
    cout<<*i<<"\t";

    Battalion* b = new Battalion;
    b->enqueueMedic(*myQueueMedics);
    b->getHP();
    return 0;
}
