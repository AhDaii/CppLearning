## 下面建立友元的尝试有什么错误?

a.
```cpp
class snap
{
    friend clasp;
    ...
};
class clasp{ ... };
```

b.
```cpp
class cuff
{
public:
    void snip(muff&){..}
    ...
};
class muff
{
    friend void cuff::snip(muff& );
    ...
};
```

c.
```cpp
class muff
{
    friend void cuff::snip(muff & );
    ...
};
class cuff
{
public: 
    void snip(muff&){...}
    ...
};
``` 

1. clasp没有前向声明
2. muff没有前向声明，void snip(muff&)无法识别出muff对象
3. cuff没有前向声明，应该将cuff的声明与定义放在muff之前，同时还需要muff前向声明