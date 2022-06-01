/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:09 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 15:27:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
#define SAMPLE1_CLASS_H

class Sample1
{

public:

	Sample1(void);
	~Sample1(void);

	static int getNbInst(void);

private:

	static int	_nbInst;
};

#endif