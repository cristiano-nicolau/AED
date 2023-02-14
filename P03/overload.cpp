//
// Tomás Oliveira e Silva, AED, October 2021
//
// example of function overloading (same function name, different argument numbers and/or data types)
//

#include <iostream>

using std::cout; // make this symbol from the std namespace directly visible

void show(const char s)
{
	cout << "char: "
		 << s
		 << std::endl;
}

void show(const int i)
{
  cout << "int: "
       << i
       << std::endl;
}

void show(const double d)
{
  cout << "double: "
       << d
       << std::endl;
}

void show(const char *s,const char *h = "string: ") // second argument with default value
{
  cout << h
       << s
       << std::endl;
}
void show (const int *p, const int size=3)
{
	cout<< "Array: \n";
	for (int i=0; i<size; i++)
		cout << "Array ["<<i<<"]="<<p[i]<< std::endl;
	}


int main(void)
{
  int array[3]={2,7,-1};
  show(1.0);
  show("hello");
  show(-3);
  show("John","name: ");
  show('a');
  show(array);	
  return 0;
}
