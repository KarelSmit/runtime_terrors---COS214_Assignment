#include "Army.h"

Army::Army(){
	leader = new General();
}

Army::Army( std::string nme ){
	leader = new General(nme);
}

Army::~Army(){

}