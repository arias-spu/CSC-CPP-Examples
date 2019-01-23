// Interface file that defines the STUDENT ADT and
// and functions that act on it

struct STUDENT 
{
	string firstName;
	string lastName;
	long ID;
};

// Functions that act on STUDENT records
void WriteStudent(ostream& ostrm, const STUDENT& student);

