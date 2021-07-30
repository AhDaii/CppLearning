## static_cast运算符与dynamic_cast运算符有什么不同？

- static_cast是编译期检测，没有运行时类型检查来保证转换的安全性
- dynamic_cast是运行期检测，保证转换的安全性，同时需要转换的对象与被转换的后的对象得是父子关系