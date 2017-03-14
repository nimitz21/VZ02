// File : pointer.h

#ifndef POINTER_H
#define POINTER_H

#include <string>
#include "utility.h"

using namespace std;

/**
 * \brief Class Pointer
 * \details Digunakan untuk melakukan casting berbagai jenis pointer ke dalam
 * bentuk pointer void 
 * 
 */
class Pointer{
public:
	string id; /**< pembeda antar objek yang ditunjuk pointer void*/
	void * p; /**< pointer void */
};

#endif