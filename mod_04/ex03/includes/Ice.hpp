/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:16:38 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:11:21 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	_type;
	public:
		Ice();
		~Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & rhs);
		Ice(std::string const & type);

	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif