

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:
		Human(void);

		Brain const	&getBrain(void);
		std::string	identify(void) const;

	private:
		Brain const _hbrain;

};

#endif
