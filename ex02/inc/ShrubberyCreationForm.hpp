/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:58:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 18:07:22 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATTION_FORM
# define SHRUBBERY_CREATTION_FORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string _name);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
		void	execute(std::string target);
	private:
		
};

#endif
