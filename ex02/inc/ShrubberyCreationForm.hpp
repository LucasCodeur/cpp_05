/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:58:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/04 18:34:40 by lud-adam         ###   ########.fr       */
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
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

	private:
		
};

#endif
