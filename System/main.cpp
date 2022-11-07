#define CATCH_CONFIG_MAIN
#include "TankUnit.cpp"
#include "InfantryUnit.cpp"
#include "SupplyUnit.cpp"
#include "MedicUnit.cpp"
#include "FootUnit.cpp"
#include "Battalion.cpp"
#include "CombatBarracks.cpp"
#include "Barracks.cpp"
#include "TankDriver.cpp"
#include "TransportUnit.cpp"
#include "TankFactory.cpp"
#include "VehicleFactory.cpp"
#include "Vehicle.cpp"
#include "SupportBarracks.cpp"
#include "SupplyTruckFactory.cpp"
#include "SupplyTruck.cpp"
#include "War.cpp"
#include "Country.cpp"
#include "Army.cpp"
#include "General.cpp"
#include "Strategy.cpp"
#include "Attack.cpp"
#include "Defend.cpp"
#include "SpecialSkill.cpp"
#include "Sniper.cpp"
#include "Stealth.cpp"
#include "Records.cpp"
#include "User.cpp"
#include "IntelDivision.cpp"
#include <iostream>
#include <stdlib.h>
#include "asciiArt.cpp"
#include "catch.hpp"

// #include

TEST_CASE("Testing Medic Iterator"){
    MedicIterator mI1;
    MedicIterator mI2;

    REQUIRE((mI1==mI2) == 1);
    REQUIRE((mI1==mI1) == 1);
    REQUIRE((mI2==mI2) == 1);

}

TEST_CASE("Testing Supply Iterator"){
    MedicIterator sI1;
    MedicIterator sI2;

    REQUIRE((sI1==sI2) == 1);
    REQUIRE((sI1==sI1) == 1);
    REQUIRE((sI2==sI2) == 1);
}

TEST_CASE("Testing Tank Iterator"){
    MedicIterator tI1;
    MedicIterator tI2;

    REQUIRE((tI1==tI2) == 1);
    REQUIRE((tI1==tI1) == 1);
    REQUIRE((tI2==tI2) == 1);
}

TEST_CASE("Testing Infantry Iterator"){
    MedicIterator iI1;
    MedicIterator iI2;

    REQUIRE((iI1==iI2) == 1);
    REQUIRE((iI1==iI1) == 1);
    REQUIRE((iI2==iI2) == 1);
}

TEST_CASE("Testing Infantry Unit"){
    InfantryUnit iU;
    iU.setVal();
    REQUIRE(iU.getHP() == 40);
    REQUIRE(iU.getRP() == 0);
    REQUIRE(iU.getDmg() == 24);
}

TEST_CASE("Testing Medic Unit"){
    MedicUnit mU;
    mU.setVal();
    REQUIRE(mU.getHP() == 40);
    REQUIRE(mU.getRP() == 24);
    REQUIRE(mU.getDmg() == 0);
}

TEST_CASE("Testing Supply Unit"){
    SupplyUnit sU;
    sU.setVal();
    REQUIRE(sU.getHP() == 40);
    REQUIRE(sU.getRP() == 0);
    REQUIRE(sU.getDmg() == 0);
}

TEST_CASE("Testing Tank Unit"){
    TankUnit tU;
    tU.setVal();
    REQUIRE(tU.getHP() == 40);
    REQUIRE(tU.getRP() == 0);
    REQUIRE(tU.getDmg() == 32);
}

TEST_CASE("Testing Foot Unit"){
    FootUnit *fU = new FootUnit(12);
    REQUIRE(fU->getHP() == 12);
    REQUIRE(fU->getDamage() == 0);
    REQUIRE(fU->getrejuvenationPower() == 0);
}

TEST_CASE("Testing Transport Unit"){
    TransportUnit *tU = new TransportUnit(2);
    REQUIRE(tU->getHP() == 2);
    REQUIRE(tU->getDamage() == 0);
}

TEST_CASE("Testing Medic"){
    Medic *m = new Medic(24,13);
    REQUIRE(m->getrejuvenationPower() == 13);
}

TEST_CASE("Testing Infantry"){
	Infantry *i = new Infantry(32,6);
	REQUIRE(i->getDamage()== 6);
	i->setDamage(50);
	REQUIRE(i->getDamage() == 50);
	REQUIRE(i->getHP() == 32);
	i->setHP(64);
	REQUIRE(i->getHP() == 64);
}

TEST_CASE("Testing Tank Driver"){
	TankDriver *tD = new TankDriver(15,12);
	REQUIRE(tD->getDamage() == 12);
}

TEST_CASE("Testing Army with InfantryUnits")
{
	Army testArmy;
	testArmy.addInfantry(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 > 0);
	REQUIRE(em == 0);
	testArmy.addInfantry(1);
	int hp2 = testArmy.getHP();
	int dmg2 = testArmy.getDamage();
	REQUIRE(hp2 > hp1);
	REQUIRE(dmg2 > dmg1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 == hp3);
}

TEST_CASE("Testing Army with MedicUnits")
{
	Army testArmy;
	testArmy.addMedic(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 == 0);
	REQUIRE(em == 0);
	testArmy.addMedic(1);
	int hp2 = testArmy.getHP();
	int dmg2 = testArmy.getDamage();
	REQUIRE(hp2 > hp1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 > hp3);
}

TEST_CASE("Testing Army with TankUnits")
{
	Army testArmy;
	testArmy.addTank(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 > 0);
	REQUIRE(em == 0);
	testArmy.addTank(1);
	int hp2 = testArmy.getHP();
	int dmg2 = testArmy.getDamage();
	REQUIRE(hp2 > hp1);
	REQUIRE(dmg2 > dmg1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 == hp3);
}

TEST_CASE("Testing Army with SupplyUnits")
{
	Army testArmy;
	testArmy.addSupply(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em1 = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 == 0);
	REQUIRE(em1 > 0);
	testArmy.addSupply(1);
	int hp2 = testArmy.getHP();
	int em2 = testArmy.getMoves();
	REQUIRE(hp2 > hp1);
	REQUIRE(em2 > em1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 == hp3);
}

TEST_CASE("Testing Army with InfantryUnits and MedicUnits")
{
	Army testArmy;
	testArmy.addInfantry(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em1 = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 > 0);
	REQUIRE(em1 == 0);
	testArmy.addMedic(1);
	int hp2 = testArmy.getHP();
	REQUIRE(hp2 > hp1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 > hp3);
}

TEST_CASE("Testing Army with InfantryUnit and TankUnit")
{
	Army testArmy;
	testArmy.addInfantry(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em1 = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 > 0);
	REQUIRE(em1 == 0);
	testArmy.addTank(1);
	int hp2 = testArmy.getHP();
	int dmg2 = testArmy.getDamage();
	REQUIRE(hp2 > hp1);
	REQUIRE(dmg2 > dmg1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 == hp3);
}

TEST_CASE("Testing Army with InfantryUnit and SupplyUnit")
{
	Army testArmy;
	testArmy.addInfantry(1);
	int hp1 = testArmy.getHP();
	int dmg1 = testArmy.getDamage();
	int em1 = testArmy.getMoves();
	REQUIRE(hp1 > 0);
	REQUIRE(dmg1 > 0);
	REQUIRE(em1 == 0);
	testArmy.addSupply(1);
	int hp2 = testArmy.getHP();
	int em2 = testArmy.getMoves();
	REQUIRE(hp2 > hp1);
	REQUIRE(em2 > em1);
	testArmy.takeDamage(10);
	int hp3 = testArmy.getHP();
	REQUIRE(hp3 < hp2);
	testArmy.heal();
	int hp4 = testArmy.getHP();
	REQUIRE(hp4 == hp3);
}


TEST_CASE("Memento test User")
{
	User* test1 = new User("testUser", 0);
	REQUIRE( test1->getUserDetails() == "testUser: 0" );
	REQUIRE( test1->getUserName() == "testUser" );
	REQUIRE( test1->getUserScore() == 0 );
	test1->setUserScore(100);
	REQUIRE( test1->getUserScore() == 100 );
	delete test1;
}

TEST_CASE("Memento test User and IntelDivision")
{
	User* testUser = new User("testUser2", 23);

	REQUIRE( testUser->getUserDetails() == "testUser2: 23" );
	REQUIRE( testUser->getUserName() == "testUser2" );
	REQUIRE( testUser->getUserScore() == 23 );

	testUser->setUserScore(77);

	REQUIRE( testUser->getUserScore() == 77 );

	IntelDivision* testID = new IntelDivision(testUser);

	REQUIRE( testID->getUser()->getUserName() == testUser->getUserName() );
	REQUIRE( testID->getUser()->getUserScore() == testUser->getUserScore() );
	REQUIRE( testID->getUser()->getUserDetails() == testUser->getUserDetails() );
	REQUIRE( testID->getDetails() == "testUser2;77" );
	REQUIRE( testID->print() == "testUser2 achieved 77" );
	REQUIRE( testID->GetName() == testID->date() + " / (" + testID->getUser()->getUserDetails() + ")" );

	delete testUser;
	delete testID;
}





//using namespace std;

//int main () {
//    SupplyIterator sI1;
//    SupplyIterator sI2;
//
//    cout<< (sI1 == sI2)<< ":"<<(sI1 == sI1)<< ":"<<(sI2 == sI2)<<endl;
////    cout<<sU.getHP()<<":"<<sU.getDmg()<<":"<<sU.getRP()<<endl;
//    return 0;
//}