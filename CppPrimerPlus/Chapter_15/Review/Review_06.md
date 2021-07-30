## 对于本章定义的Grand、Superb 和Magnificent类，假设pg为Grand\*指针，并将其中某个类的对象地址赋给了它，而ps为Superb*指针，则下面两个代码示例的行为有什么不同？
```cpp
if(ps = dynamic_cast<Superb*>(pg))
    ps->say(); // sample #1
if(typeid(*pg) == typeid(Superb))
    ((Superb*) pg)->say(); // sample #2
```

- #1转换成功，将调用Superb的say()方法
- #2语句不执行，因为pg的类型为Grand，与Superb不相同，if中表达式的值为false