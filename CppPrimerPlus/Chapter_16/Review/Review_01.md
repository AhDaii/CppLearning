## 将它转换成使用string对象声明，哪些方法不在需要显式定义？
```cpp
class RQ1
    {
    private:
        char* st;
    public:
        RQ1()
        {
            st = new char[1];
            strcpy(st, "");
        }
        RQ1(const char* s)
        {
            st = new char[strlen(s) + 1];
            strcpy(st, s);
        }
        RQ1(const RQ1& rq)
        {
            st = new char[strlen(rq.st) + 1];
            strcpy(st, rq.st);
        }
        ~RQ1()
        {
            delete [] st;
        }
        RQ1 & operator=(const RQ1& rq);
    };
```

可以删除`RQ1(const RQ1& rq)`、`~RQ1()`和`RQ1 &operator=(const RQ1& rq);`