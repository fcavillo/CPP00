#ifndef CONTACT_CLASS_HPP
# define  CONTACT_CLASS_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

class Contact
{
    public:

    Contact(void);
    ~Contact(void);

    void    fill_info(int i);
    void    print_contact(void);
    void    print_list(void);

    private:

    int nb;
    std::string info[5];
};

#endif