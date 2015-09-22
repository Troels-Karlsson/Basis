/*
 * AndromedaExceptions.h
 *
 *  Created on: 22/09/2015
 *      Author: FroZen
 */

#ifndef EXCEPTION_BASE_H_
#define EXCEPTION_BASE_H_
#include <exception>
#include <string>

namespace AndromedaSolutions {

class ExceptionBase: public std::exception {
public:
		ExceptionBase(std::string msg);
		~ExceptionBase() throw();

		virtual const char* what() const throw();

	private:
		std::string error;
};
}
#endif
