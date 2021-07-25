## 使用本章中的模板定义对下面的内容进行定义：
- string对象数组: ArrayTp<string> arr;
- double数组栈: StackTp<double> st;
- 指向Worker对象的指针的栈数组：ArrayTp<StackTp<Worker*> > st;

程序清单14.18，生成了四种模板：
1. ArrayTp<int, 10>
2. ArrayTp<double, 10>
3. ArrayTp<int, 5>
4. ArrayTp<ArrayTp<int, 5>, 10 >