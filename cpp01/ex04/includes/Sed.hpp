/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:57:46 by bducrocq          #+#    #+#             */
/*   Updated: 2022/12/16 00:12:44 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>

class Sed {
	public:
		Sed( void );
		Sed( std::string filePath, std::string s1, std::string s2 );
		~Sed( void );

		int				startSed( void );
		void			setFile( std::string filePath );
		void			setS1( std::string s1 );
		void			setS2( std::string s1 );

	private:
		std::string		_tmpstr;
		std::string		_filePath;
		std::string		_s1;
		std::string		_s2;

		std::ifstream	_ifs;
		std::ofstream	_ofs;
		
		int				_check_arg( std::string filename, std::string s1, std::string s2 ) const;
		int				_openfile( void );
		void			_searchAndReplace( void );
};

#endif