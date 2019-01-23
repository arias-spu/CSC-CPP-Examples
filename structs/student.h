// Interface file that defines Student struct and
// and functions that act on it

struct Student {
	string firstName;
	string lastName;
	long ID;
	float GPA;
};

// Functions that act on Student records
bool ReadStudent(istream& istrm, Student& student);
void WriteStudent(ostream& ostrm, const Student& student);

