## 哪些运算符不能重载？

- sizeof: sizeof运算符
- .: 成员运算符
- .*: 成员指针运算符
- ::: 作用域解析运算符
- ?::条件运算符
- typeid: 一个RTTI运算符
- const_cast、dynamic_cast、reinterpret_cast、static_cast: 强制类型转换运算符