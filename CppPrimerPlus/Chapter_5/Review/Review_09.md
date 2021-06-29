## 在查看输入方面，cin>>ch同cin.get(ch)和ch=cin.get()有什么不同？

- cin>>ch 读入时会省略空格
- cin.get(ch)读入时不会省略空格，返回的是istream对象
- cin.get()读入时也不会省略空格，但是返回的是char对象