## 假设Fizzle类只有如下所示的数据成员：
```cpp
class Fizzle
{
private:
    double bubbles[4000];
}
```
为什么不适合给这个类定义移动构造函数？要让这个类适合定义移动构造函数，应如何修改存储4000个double值的方式？

因为每次调用移动构造函数都将会逐个复制值到数组中，耗时很大，可以将`double bubbles[4000]`改成`double* bubbles`