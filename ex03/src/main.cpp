/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:42:58 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static void t_make_form(void);

int	main(void)
{
	t_make_form();
	return (0);
}

static void t_make_form(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_make_form" << std::endl;
	Intern	unknown;
	
	unknown.makeForm("robotomy request", "Robot");
	std::cout << "--------------------------------------------------------" << std::endl;
	unknown.makeForm("shrubbery request", "Tree");
	std::cout << "--------------------------------------------------------" << std::endl;
	unknown.makeForm("presidential request", "President");
	std::cout << "--------------------------------------------------------" << std::endl;
	unknown.makeForm("blabla request", "blabla");
}
