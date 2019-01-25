// Stubbed implementation of the Class ADT

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

#include "class.h"

// Read student records from file until hit end of file
// istrm - stream to read from
// roster - a CLASS struct to fill
// Returns: true if everything successful, false if not all
// students fit in the array
bool ReadClass(istream& istrm, CLASS& roster)
{
	assert(false);
	return false;
}

int FindByFirstName(const CLASS& roster, unsigned int startIndex, string prefix)
{
	assert(false);
	return -1;
}

void WriteClassMember(const CLASS& roster, unsigned int index, ostream& ostrm)
{
	assert(false);
}
