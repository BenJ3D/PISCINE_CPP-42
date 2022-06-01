/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:49:09 by bducrocq          #+#    #+#             */
/*   Updated: 2022/06/01 16:39:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
#define SAMPLE1_CLASS_H

class Sample1
{

public:

	int		foo;
	
	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
	
};

#endif