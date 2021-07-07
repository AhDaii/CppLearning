## 指出下面每个目标是否可以使用默认参数或函数重载完成,或者这两种方法都无法完成,并提供合适的原型.

a. mass(density, volume)返回密度为density、体积为volume的物体的质量，而mass(density)返回密度为density、体积为1.0立方米的物体的质量。这些值的类型都为double。

b. repeat(10, "I'm OK")将指定的字符串显示10次，而repeat("But you're kind of stupid")将指定的字符串显示5次。

c. average(3, 6)返回两个int参数的平均值(int类型)，而average(3.0, 6.0)返回两个double值的平均值(double类型)。

d. mangle("I'm glad to meet you")根据是将值赋给char变量还是char*变量，分别返回字符I和只想字符串"I'm mad to gleet you"的指针。

- double mass(double density, double volume = 1.0);
- 无法使用默认参数，可以使用重载完成:
    - void repeat(int num, string str);
    - void repeat(string str);
- 重载：
    - int average(int x, int y);
    - double average(double x, double y);
- 无法用重载和默认参数完成。