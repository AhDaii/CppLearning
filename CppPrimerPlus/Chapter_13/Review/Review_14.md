## 下述代码有什么问题？

```cpp
class Kitchen
{
public:
    Kitchen() { kit_sq_ft = 0; }
    virtual double area() const { return kit_sq_ft * kit_sq_ft; }
protected:
private:
    double kit_sq_ft;
};

class House:public Kitchen
{
public:
    House(){ all_sq_ft += kit_sq_ft; }
    double area(const char * s) const{ cout << s; return all_sq_ft; }
protected:
private:
    double all_sq_ft;
};
```

1. 语义上有错误，厨房和房子不是is-a关系，而是has-a关系，kitchen应是house的一个成员。
2. kit_sq_ft是基类的私有成员，派生类不能使用该成员。
3. House类中没有定义area()函数，而是新定义了area(const char*)函数，这将隐藏area()函数。