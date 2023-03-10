/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:27:38 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 09:52:30 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

#define END		"\033[0m"
#define BOLD	"\033[1m"
#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;34m"
#define PURPLE	"\033[1;35m"
#define CYAN	"\033[1;36m"

class PhoneBook {

	public:
				PhoneBook(void);
				~PhoneBook(void);
		void 	AddContact(Contact contact);
		Contact	GetContact(int i) const;
		int 	GetSize(void) const;

	private:
		Contact	_contactTab[8];
		int 	_size;
		int 	_eraseIndex;
};


#endif
