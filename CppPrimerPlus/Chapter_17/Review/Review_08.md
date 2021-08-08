## 对于下面程序
```cpp
#include <iostream>  
#include <iomanip>   
using namespace std; 
 
int main()
{
	char ch;
	int ct1 = 0;
	cin >> ch;
	while (ch != 'q')
	{
		ct1++;
		cin >> ch;
	}

	int ct2 = 0;
	cin.get(ch);
	while (ch != 'q')
	{
		ct2++;
		cin.get(ch);
	}

	cout << "ct1 = " << ct1 << "; ct2 = " << ct2 << "\n";
	return 0;
}
```
如果输入如下，该程序将打印什么内容？

I see a q\<Enter>

I see a q\<Enter>

其中，\<Enter>表示按回车键

输出为`ct1 = 5; ct2 = 9`

- `ct1 = 5`是因为只识别到`Iseea`，不包含空格
- `ct2 = 9`是因为识别到了`<Enter>I see a `，包含回车和空格