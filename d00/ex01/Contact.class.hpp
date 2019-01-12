

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void	showInfo(void);
		void	showShortInfo(void);
		void	setCfields(void);
	
	private:

		std::string _cfields_names[11];
		std::string _cfields[11];
};

#endif
