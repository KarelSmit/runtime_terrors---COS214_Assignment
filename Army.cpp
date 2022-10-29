#include "Army.h"

Army::Army(){

}

Army::Army( std::string nme ){
	leader = new General(nme);
}

Army::~Army(){

}