## 为什么通常按引用传递对象比按值传递对象的效率更高？

如果使用按值传递，则将调用复制构造函数重新生成一个临时对象，增加了时间开销；不仅如此，如果函数里需要调用派生类的虚函数，按值传递将只能调用基类的虚函数而不能调用派生类的虚函数，功能上有缺陷。