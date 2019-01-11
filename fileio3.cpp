#include <iostream>
#include <fstream>
#include <string>
using std::ifstream;
using std::getline;
using std::string;
using std::cout;
using std::endl;
void skipWhite(ifstream& fin);
int main(){
	// Echo the file to console
	ifstream fin("data.txt");
	skipWhite(fin);
	string data;
	while(!fin.eof()){
		fin>>data;
		cout<<data<<endl;
		skipWhite(fin);
	}


	return 0;
}

void skipWhite(ifstream& fin)
{
    int ch;
    while(true)
    {
        ch = fin.peek();
        if ( !isspace(ch))
            break;
        fin.ignore(1);
    }
}
