
//	"util_entitygen.h" -*- C++ -*-
//	Created on: 18 May 2016
//	Entity generator that reads Comma Separated Values.
//
//	Copyright (C) 2016  Geoffrey Tang.
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef MAIN_UTIL_ENTITYGEN_H_
#define MAIN_UTIL_ENTITYGEN_H_

#include <iostream>

/**
 *  @brief  Generate entity types from CSV.
 *  @param  FileName: the CSV file path.
 *  Only be called by developers to generate entity type JSONs. Don't call this
 *  regularly (as is quite devious)...
 */
bool	utilGenerateEntityFromCSV(
		std::string	FileName);

#endif /* MAIN_UTIL_ENTITYGEN_H_ */
