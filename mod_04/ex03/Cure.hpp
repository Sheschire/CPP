/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:16:05 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/31 16:10:04 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	_type;
	public:
		Cure();
		~Cure();
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);
		Cure(std::string const & type);

	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif