## 假设baseDMA::operator=()的函数的返回类型为void，而不是baseDMA &，这将有什么后果？如果返回的类型为baseDMA，而不是baseDMA &，又将有什么后果？

- 如果返回类型为void，如果遇到a = b = c这种语句，a将会被赋值void，这将报错
- 如果返回类型为baseDMA，每次返回时都将使用复制构造函数构造一个临时对象返回，会增大时间的开销。