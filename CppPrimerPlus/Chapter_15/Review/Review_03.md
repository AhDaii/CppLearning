## 下面的嵌套类声明中可能存在什么问题？
```cpp
class Ribs
{
private:
    class Sauce
    {
        int soy;
        int sugar;
    public:
        Sauce(int s1, int s2):soy(s1), sugar(s2){}
    }
    ...
};
```

Sauce成员无法被访问