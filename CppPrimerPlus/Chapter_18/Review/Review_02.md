## 在下述简短的程序中，那些函数调用不对？为什么？对于合法的函数调用，指出其引用参数指向的是什么。
```cpp
#include <iostream>    
using namespace std; 

double up(double x) { return 2.0 * x; }
void r1(const double& rx){ cout << rx << endl; }
void r2(double & rx){ cout << rx << endl; }
void r3(double &&rx){ cout << rx << endl; }
int main(int argc, char* argv[])
{
	double w = 10.0;
	r1(w);
	r1(w + 1);
	r1(up(w));
	r2(w);
	r2(w + 1);
	r2(up(w));
	r3(w);
	r3(w + 1);
	r3(up(w));

	return 0;
}
```

- `r1(w)` 正确，指向w
- `r1(w + 1)` 正确，指向临时对象
- `r1(up(w))` 正确，指向up返回的临时对象
- `r2(w)` 正确，指向w
- `r2(w + 1)` 错误，double&不能指向右值
- `r2(up(w))` 错误，double&不能指向右值
- `r3(w)` 错误，double&&不能指向左值
- `r3(w + 1)` 正确，指向临时对象
- `r3(up(w))` 正确，指向临时对象