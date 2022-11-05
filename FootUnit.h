
#ifndef FOOTUNIT_H
#define FOOTUNIT_H
class FootUnit {
    protected: 
    int HP; 
    public:
    FootUnit(int); 
    ~FootUnit();
    int getHP(); 
	virtual int getDamage();
	virtual int getrejuvenationPower();
};
#endif