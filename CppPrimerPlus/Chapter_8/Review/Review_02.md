## 假设song()函数的原型如下：
void song(const char *name, int times);
a. 如何修改原型，使times的默认值为1

b. 函数定义需要做哪些修改？

c. 能否为name提供默认值"O.My Papa"?

- void song(const char * name, int times = 1);
- 函数定义与没有默认参数的定义相同
- 不能，因为必须从右到左给默认值，不能跳过times设置name的默认值