/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:16:38 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/23 16:39:21 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

// #include "AMateria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		const std::string	_type = "ice";
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