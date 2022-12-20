/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:17:38 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/06 01:08:47 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_CLASS_H
# define TEST_CLASS_H
# include <iostream>
# include <string>
# include <limits> //??
# include <cctype> //??
# include <sstream> 
class Ben {
	
public:
	
	int			foo;
	std::string	txt;

	Ben( void );
	~Ben( void );
	
	void	action(void);
	void	add (void);
};


#endif