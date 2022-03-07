#include <cwctype> 
#include <iostream> 
using namespace std; 

int main() {   

	wchar_t rs1 = '.'; 
	wchar_t rs2 = 'C'; 
	wchar_t rs3 = '@';
	wchar_t rs4 = 'M';

	if (iswupper(rs1)) 
		wcout << rs1 << " is a uppercase "; 
	else
		wcout << rs1 << " is not a uppercase "; 
	wcout << endl; 

	if (iswupper(rs2)) 
		wcout << rs2 << " is a uppercase "; 
	else
		wcout << rs2 << " is not a uppercase "; 
	wcout << endl; 
	
	if (iswupper(rs3)) 
		wcout << rs3 << " is a uppercase "; 
	else
		wcout << rs3 << " is not a uppercase  "; 
	wcout << endl; 
	
	if (iswupper(rs4)) 
		wcout << rs4 << " is a uppercase  "; 
	else
		wcout << rs4 << " is not a uppercase  "; 
	wcout << endl; 

	return 0; 
}
