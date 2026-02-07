/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:22:47 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/06 14:41:41 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN	
# define INTERN

#include <iostream>

#include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const std::string _useless);
		Intern(const Intern &other);
		Intern& operator=(const Intern &other);

		AForm* makeForm(std::string nameForm, std::string nameTarget);
		void	free_all(AForm* ptr, AForm** ptrs);
	private:
		
};

#endif
