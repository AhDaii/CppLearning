## 为什么STL设计人员仅定义了迭代器基类，而使用继承来派生其他迭代器类型的类，并根据这些迭代器来表示算法？

因为迭代器之间彼此遵循的规则不同，但定义基类后表示派生类都具有基类迭代器的基本功能，这样编写容器相关算法时使得算法通用。