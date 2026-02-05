/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:58:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 14:33:47 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATTION_FORM
# define SHRUBBERY_CREATTION_FORM

#include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
		bool	create_tree(std::string target);
	private:
		
};

#endif
