/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:09 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 09:41:10 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
#define SAMPLE1_CLASS_H

#include <iostream>

class Sample1
{

public:

	Sample1(void);
	~Sample1(void);

	int		getFoo(void) const;
	void	setFoo(int v);

private:

	int _foo;
};

#endif