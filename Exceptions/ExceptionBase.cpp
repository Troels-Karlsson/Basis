/*
 * AndromedaExceptions.cpp
 *
 *  Created on: 22/09/2015
 *      Author: FroZen
 */
#include "ExceptionBase.h"

namespace AndromedaSolutions {
	ExceptionBase::ExceptionBase(std::string msg)
	{
		error = msg;
	}

	ExceptionBase::~ExceptionBase() throw(){

	}

	const char* ExceptionBase::what() const throw()
	{
		return error.c_str();
	}
}
