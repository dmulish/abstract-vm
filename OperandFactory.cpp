/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandFactory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmulish <dmulish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:52:31 by dmulish           #+#    #+#             */
/*   Updated: 2018/04/18 20:04:12 by dmulish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IOperand.hpp"

IOperand const	*OperandFactory::_createInt8(std::string const &value) const
{
	
}

IOperand const	OperandFactory::createOperand(eOperandType type, std::string const &value) const
{
	IOperand	*operand = NULL;
	if (type == Int8)
		operand = _createInt8(value);
}
