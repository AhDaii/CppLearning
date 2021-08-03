## 如果程序清单16.9是使用list（而不是vector）实现的，则该程序哪部分将是非法的？非法的部分能够轻松修复吗？如果可以，如何修复？

1. `sort(books.begin(), books.end())` => `books.sort()`
2. `sort(books.begin(), books.end(), worseThan)` => `books.sort(worseThan)`
3. `random_shuffle(books.begin(), books.end())` => 
```cpp
vector<Review> tmp(books.begin(), books.end());
random_shuffle(tmp.begin(), tmp.end());
copy(tmp.begin(), tmp.end(), books.begin());
```
