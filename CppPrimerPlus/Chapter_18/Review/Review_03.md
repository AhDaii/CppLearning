## a.下述简短的程序显示什么？为什么？
```cpp
#include <iostream>    
using namespace std; 

double up(double x) { return 2.0 * x; }
void r1(const double& rx){ cout << "const double & rx" << endl; }
void r1(double & rx){ cout << "double & rx" << endl; } 
int main(int argc, char* argv[])
{
	double w = 10.0;
	r1(w);		//
	r1(w + 1);	//
	r1(up(w));	//
	 
	return 0;
}
```

b.下述简短的程序显示什么？为什么？

```cpp
#include <iostream>    
using namespace std; 

double up(double x) { return 2.0 * x; }
void r1(double& rx){ cout << "double & rx" << endl; }
void r1(double&& rx){ cout << "double && rx" << endl; } 
int main(int argc, char* argv[])
{
	double w = 10.0;
	r1(w);		
	r1(w + 1);	
	r1(up(w));	
	 
	return 0;
}
```

c.下述简短的程序显示什么？为什么？
```cpp
#include <iostream>    
using namespace std; 

double up(double x) { return 2.0 * x; }
void r1(const double& rx){ cout << "const double & rx" << endl; }
void r1(double&& rx){ cout << "double && rx" << endl; } 
int main(int argc, char* argv[])
{
	double w = 10.0;
	r1(w);		
	r1(w + 1);	
	r1(up(w));	
	 
	return 0;
}
```

- a输出
```
double & rx
const double &rx
const double &rx
```
临时对象属于右值，不能被普通引用接受

- b输出
```
double & rx
double && rx
double && rx
```
临时对象可以被移动引用接受，因为属于右值

- c输出
```
const double & rx
double && rx
double && rx
```
左值只能被const double&接受