
#include "MyClass.hpp"

MyClass::MyClass( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

MyClass::~MyClass( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

MyClass::MyClass( MyClass const & src)
{
	*this = src;
	return;
}

std::string MyClass::getName(void)
{
	return this->_name;
}
MyClass & MyClass::operator=(MyClass const & ft)
{
	this->_someVar = ft._someVar;
	this->_someVar2 = ft._someVar2;
	this->_name = ft._name;

	std::cout << ft._name << " assigned" << std::endl;
	return *this;
}

