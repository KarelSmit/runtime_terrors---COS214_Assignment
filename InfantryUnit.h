#ifndef INFANTRYUNIT_H
#define INFANTRYUNIT_H

#include "Node.h"
#include "InfantryIterator.h"
#include "Battalion.h"
#include "Infantry.h"

class InfantryUnit : public Battalion
{
	friend class InfantryIterator;

public:
	InfantryUnit();
	~InfantryUnit();
	int getHP();
	int getDmg();
	int getRP();
	InfantryIterator begin();
	InfantryIterator end();
	void setVal();

	Node<FootUnit *> *head;

private:
	int totHP;
	int totDmg;
};

#endif

/* #ifndef _InfantryUNIT_H
#define _InfantryUNIT_H

	#include "Node.h"
	#include "InfantryIterator.h"

	template <typename T>
	class InfantryUnit{
		friend class InfantryIterator<T>;
		public:
			InfantryUnit();
			void enqueue(T e);
			T dequeue();
			bool isEmpty();
			InfantryIterator<T> begin();
			InfantryIterator<T> end();
			InfantryIterator<T> first();
		private:
			Node<T>* head;
	};

	#include "InfantryUnit.cpp"

#endif */
