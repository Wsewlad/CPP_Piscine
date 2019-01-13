

#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>

class Pony
{
	public:
		Pony(void);
		~Pony(void);
		void		sing(void);
		void		setName(std::string nm);
		void		showName(void);
		
	private:
		std::string	name;
};

#endif
