/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:50:26 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:13:01 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "includes.hpp"

class ICharacter;

class AMateria
{
	protected:
		const std::string	_type;
		AMateria();
	public:
		virtual ~AMateria();
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & rhs);
		AMateria(std::string const & type);
	
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};

#endif