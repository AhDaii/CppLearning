a.
```
1. Golfer();
2. Golfer(const char * name, int g = 0);
3. Golfer(const char * name, int g = 0);
4. Golfer();
5. Golfer(const Golfer & g);
6. Golfer(const char * name, int g = 0);
7. default assginment operator function
8. use Golfer(const char * name, int g = 0); at first, then use default assginment operator function
```

b.
```
还需要重写一个赋值运算符函数，同时要保证指针指向的区域进行赋值时不能直接将指向的地址进行赋值，要使用new初始化指针，然后将指针中的值进行复制。
```