/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <jlitaudo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:29:48 by jlitaudo          #+#    #+#             */
/*   Updated: 2023/03/10 16:23:49 by jlitaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

# define DEFAULT 	"\001\033[0;39m\002"
# define END  		"\001\033[0m\002"
# define BOLD    	"\001\033[1m\002"
# define RED 		"\001\033[0;91m\002"
# define RED_B 		"\001\033[1;91m\002"
# define YELLOW		"\001\033[0;93m\002"
# define YELLOW_B	"\001\033[1;93m\002"
# define GRAY		"\001\033[0;90m\002"
# define GRAY_B		"\001\033[1;90m\002"
# define GREEN   	"\001\033[0;92m\002"
# define GREEN_B   	"\001\033[1;92m\002"
# define BLUE    	"\001\033[0;34m\002"
# define BLUE_B    	"\001\033[1;34m\002"
# define PURPLE  	"\001\033[0;95m\002"
# define PURPLE_B  	"\001\033[1;95m\002"
# define CYAN_B    	"\001\033[1;96m\002"
# define CYAN    	"\001\033[0;96m\002"


class Harl {

	public:
		Harl();
		~Harl();

		void	complain(int level);
		int		filter(std::string filter);

	private:
		void 		_debug( void );
		void 		_info( void );
		void 		_warning( void );
		void 		_error( void );
		void		(Harl::*_ptr_level[4])(void);
		std::string	_levels[4];

};


#endif //CPP_01_HARL_H
