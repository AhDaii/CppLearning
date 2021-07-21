## 假设Corporation是基类，PublicCorporation是派生类。再假设这两个类都定义了head()函数，ph是指向Corporation类型的指针，且被赋给了一个PublicCorporation对象的地址。如果基类将head()定义为：

a.常规非虚方法；

b.虚方法；

则ph->head()将被做如何解释？

- 调用基类的head()方法
- 调用派生类的head()方法