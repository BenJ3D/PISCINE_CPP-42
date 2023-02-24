/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:12:41 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/30 14:34:04 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# define MAX_IDEAS 100
class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain&				operator=( Brain const & rhs );

		void				setIdea(int index, std::string idea);
		const std::string&	getIdea(int index) const;

	private:
		std::string		_invalidIndex;
		std::string		ideas[MAX_IDEAS];
};

# define COLOR_BLACK	"\033[0;30m"
# define COLOR_RED		"\033[0;31m"
# define COLOR_GREEN	"\033[0;32m"
# define COLOR_YELLOW	"\033[0;33m"
# define COLOR_BLUE		"\033[0;34m"
# define COLOR_PURPLE	"\033[0;35m"
# define COLOR_CYAN		"\033[0;36m"
# define COLOR_NONE		"\033[0;37m"

#endif /* *********************************************************** BRAIN_H */