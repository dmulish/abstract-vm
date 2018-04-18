/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOperand.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmulish <dmulish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:53:12 by dmulish           #+#    #+#             */
/*   Updated: 2018/04/18 19:50:31 by dmulish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOPERAND_HPP
# define IOPERAND_HPP

enum	eOperandType {Int8, Int16, Int32, Float, Double};

class	IOperand
{
	public:
		// Precision of the type of the instance
		virtual int getPrecision(void) const = 0;
		// Type of the instance
		virtual eOperandType getType(void) const = 0;

		// Sum, Difference, Product, Quotient and Modulo
		virtual IOperand const *operator+(IOperand const &rhs) const = 0;
		virtual IOperand const *operator-(IOperand const &rhs) const = 0;
		virtual IOperand const *operator*(IOperand const &rhs) const = 0;
		virtual IOperand const *operator/(IOperand const &rhs) const = 0;
		virtual IOperand const *operator%(IOperand const &rhs) const = 0;

		// String representation of the instance
		virtual std::string const & toString(void) const = 0;
		virtual ~IOperand(void) {}
};

// template <class/typename > ?
class	Int8: public IOperand
{
	public:
		int				getPrecision(void);
		eOperandType	getType(void);
};

class	OperandFactory
{
	public:
		IOperand const *createOperand(eOperandType type, std::string const &value) const;
		~Factory() {}

	private:
		IOperand const *_createInt8(std::string const &value) const;
		IOperand const *_createInt16(std::string const &value) const;
		IOperand const *_createInt32(std::string const &value) const;
		IOperand const *_createFloat(std::string const &value) const;
		IOperand const *_createDouble(std::string const &value) const;
};

#endif
