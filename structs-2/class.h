// Interface file that defines CLASS struct and
// and functions that act on it

#include "student.h"

const int MAX_STUDENTS = 50;
typedef struct {
	unsigned int nStudents;	
	STUDENT list[MAX_STUDENTS];
} CLASS;

// Functions that act on CLASS
bool ReadClass(istream& istrm, CLASS& roster);
int FindByFirstName(const CLASS& roster, unsigned int startIndex, string prefix);
void WriteClassMember(const CLASS& roster, unsigned int index, ostream& ostrm);

