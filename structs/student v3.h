// Interface file that defines the STUDENT ADT and
// and functions that act on it

struct STUDENT {
	string firstName;
	string lastName;
	long ID;
	float GPA;
};

// Functions that act on STUDENT structs
void WriteStudent(ostream& ostrm, const STUDENT& student);

