## 修改下述简短的程序，使其使用lambda表达式而不是f1（）。请不要修改show2（）。
```cpp
#include <iostream>    
using namespace std; 

template<typename T>
void show2(double x, T&fp){ cout << x << " -> " << fp(x) << '\n'; }
double f1(double x) { return 8 * x + 32; }
int main(int argc, char* argv[])
{
	show2(18.0, f1);
	return 0;
}
```
修改为:
```cpp
#include <iostream>    
using namespace std; 

template<typename T>
void show2(double x, T&fp){ cout << x << " -> " << fp(x) << '\n'; }
int main(int argc, char* argv[])
{
	show2(18.0, [](double x) { return 8 * x + 32; });
	return 0;
}
```