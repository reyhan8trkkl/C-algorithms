#include <cwctype> 
#include <iostream> 
using namespace std; 

int main() {   
	wchar_t rs1 = '.'; 
	wchar_t rs2 = 'c'; 
	wchar_t rs3 = '?';
	wchar_t rs4 = 'm';

	if (iswlower(rs1)) 
		wcout << rs1 << " is a lowercase "; 
	else
		wcout << rs1 << " is not a lowercase "; 
	wcout << endl; 

	if (iswlower(rs2)) 
		wcout << rs2 << " is a lowercase "; 
	else
		wcout << rs2 << " is not a lowercase "; 
	wcout << endl; 
	
	if (iswlower(rs3)) 
		wcout << rs3 << " is a lowercase "; 
	else
		wcout << rs3 << " is not a lowercase  "; 
	wcout << endl; 
	
	if (iswlower(rs4)) 
		wcout << rs4 << " is a lowercase  "; 
	else
		wcout << rs4 << " is not a lowercase  "; 
	wcout << endl; 

	return 0; 
}
