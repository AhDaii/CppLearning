## 修改下述简短而丑陋的程序，使其使用lambda表达式而不是函数符Adder。请不要修改sum（）。
```cpp
//  
//  main.cpp  
//  HelloWorld  
//  
//  Created by feiyin001 on 17/01/04.  
//  Copyright (c) 2016年 Fable. All rights reserved.  
//  
#include <iostream>   
#include <array>
using namespace std; 

const int Size = 5;

template<typename T>
void sum( array < double, Size> a, T& fp);
class Adder
{
	double tot;
public:
	Adder(double q = 0) : tot(q) {}
	void operator()(double w){ tot += w; }
	double tot_v() const { return tot; }
};
int main(int argc, char* argv[])
{
	double total = 0;
	Adder ad(total);
	array<double, Size> temp_c = { 32.1, 34.3, 37.8, 35.2, 34.7 };
	sum(temp_c, ad);
	total = ad.tot_v();
	cout << "total: " << ad.tot_v() << endl;
	return 0;
}
template<typename T>
void sum(std::array < double, Size> a, T& fp)
{
	for (auto pt = a.begin(); pt != a.end(); ++ pt)
	{
		fp(*pt);
	}
}
```

修改为
```cpp
//  
//  main.cpp  
//  HelloWorld  
//  
//  Created by feiyin001 on 17/01/04.  
//  Copyright (c) 2016年 Fable. All rights reserved.  
//  
#include <array>
#include <iostream>
using namespace std;

const int Size = 5;

template <typename T>
void sum(array<double, Size> a, T& fp);
int main(int argc, char* argv[]) {
    double total = 0;
    array<double, Size> temp_c = {32.1, 34.3, 37.8, 35.2, 34.7};
    auto ad = [&total](double w) { total += w; };
    sum(temp_c, ad);
    cout << "total: " << total << endl;
    return 0;
}
template <typename T>
void sum(std::array<double, Size> a, T& fp) {
    for (auto pt = a.begin(); pt != a.end(); ++pt) {
        fp(*pt);
    }
}
```