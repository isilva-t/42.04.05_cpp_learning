#pragma once

#include <iostream>

class Zombie {

public :

	Zombie( void ) ;

	Zombie(const std::string &def ) ;
	
	~Zombie( void ) ;

	void announce( void );

private :

	std::string name ;

}	;

