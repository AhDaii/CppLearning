## 指出虚基类与非虚基类之间的区别

- 对于非虚基类，如果有间接派生类从多个派生类派生而来，则会有多个基类创建
- 对于虚基类，如果有间接派生类从多个派生类派生而来，则只会有1个基类创建