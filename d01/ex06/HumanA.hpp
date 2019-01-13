

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA(void);
		void	attack(void);

	private:
		std::string _name;
		Weapon &_wpn;
};

#endif
