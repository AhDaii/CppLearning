## 下面的两条语句都读取并丢弃行尾之前的所有字符（包括行尾）。这两条语句的行为在哪些方面不同？
```cpp
while(cin.get() != '\n')
         continue;
cin.ignore(80,'\n');
```

- `cin.get()`会一直读取到换行符
- `cin.ignore(80, '\n')`最多只会读取80个字符，或者遇到换行符才结束，超过80个字符无论如何都会结束读取
