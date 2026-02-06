/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:22:47 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:27:14 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string _name);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
		void	execute(Bureaucrat const & executor) const;
	private:
		
};

#endif
