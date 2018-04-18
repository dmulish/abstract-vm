/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmulish <dmulish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:33:35 by dmulish           #+#    #+#             */
/*   Updated: 2018/04/18 18:59:35 by dmulish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IOperand.hpp"

int		main(void)
{
	Factory		*factory;
	IOperand	*operand;

	// factory = new 

	operand = factory->createOperand(int8, "42");
	return (0);
}
