## 从概念上或语法上说，下面哪个不是正确使用auto_ptr的方法（假设已经包含了所需的头文件）？

```cpp
auto_ptr<int> pia(new int[20]); // #1
auto_ptr<string> (new string);  // #2
int rigue = 7;                  
auto_ptr<int>pr(&rigue);        // #3
auto_ptr dbl(new double);      // #4
```

1. auto_ptr不支持数组
2. 没有变量名称
3. 不能指向自动变量
4. 没有模版参数，应使用`auto<double> dbl(new double)`
