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
	int i;

	for (i = 0; i < MAX_STUDENTS && !istrm.eof(); i++)
	{
		ReadStudent(istrm, roster.list[i], false);
	}
	roster.nStudents = i;
	return istrm.eof();
}

// Search for student student with first name with matching prefix
// roster - a CLASS ADT
// startIndex - index to start searching at
// prefix - prefix string to match on
// Returns: index where first match is seen or -1 to indicate not found
int FindByFirstName(const CLASS& roster, unsigned int startIndex, string prefix)
{
	for (unsigned int index = startIndex; index < roster.nStudents; index++)
	{
		if (roster.list[index].firstName.substr(0, prefix.length()) == prefix)
		{
			return index;
		}
	}
	return -1;
}

// Output class member at index to stream
// roster - a CLASS ADT
// index - index into class list should be < # of students in list
// ostrm - output stream to write to
// Returns: nothing
void WriteClassMember(const CLASS& roster, unsigned int index, ostream& ostrm)
{
	assert(index < roster.nStudents);
	WriteStudent(ostrm, roster.list[index]);
}
