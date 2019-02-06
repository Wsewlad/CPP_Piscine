
#ifndef MY_CLASS_H
# define MY_CLASS_H

# include <string>
# include <iostream>

class MyClass
{

	public:
		MyClass( void );
		MyClass( std::string name );
		MyClass( MyClass const & src );
		~MyClass( void );

		std::string getName( void );

		MyClass &	operator=( MyClass const & ft );

	private:
		
		int	_foo;
}

std::osteam &	operator<<( std::osteram & o, MyClass const & i );


#endif

