/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:17:38 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/02 00:46:40 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_CLASS_H
# define TEST_CLASS_H

class Ben {
	
public:
	
	int			foo;
	std::string	txt;

	Ben( void );
	~Ben( void );
	
	void action(void);
};


#endif