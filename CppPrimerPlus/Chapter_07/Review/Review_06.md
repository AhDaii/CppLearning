## 为什么不对类型未基本类型的函数参数使用const限定符？

因为将基本类型的变量作为参数传递时，传递的时值而不是地址，在函数中的只是原变量的一份拷贝，对这个拷贝的变量做更改时不会影响原变量的值，所以不需要舒勇const限定符。