

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string tp);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string tp);

	private:
		std::string 		_type;
};

#endif
