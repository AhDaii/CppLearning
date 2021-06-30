## 创建表示下述条件的逻辑表达式：

a. weight大于或者等于115，但小于125。
b. ch为q或Q。
c. x为偶数，但不是26。
d. x为偶数，但不是26的倍数。
e. donation为1000-2000或guest为1。
f. ch是小写字母或大写字母。

1. weight >= 115 && weight < 125
2. ch == 'q' || ch == 'Q'
3. x % 2 == 0 && x != 26
4. x % 2 == 0 && x % 26 != 0
5. donation >= 1000 && donation <=2000 || guest == 1
6. (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)