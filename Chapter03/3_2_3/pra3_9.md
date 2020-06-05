# 下面的程序有何作用？ 它合法吗？ 如果不合法，为什么？

```c++
string s;
cout << s[0] << endl;
```
不一定合法，如果s是一个空串，那么将会导致无法预料的结果。应该改为：
```c++
string s;
if (!s.empty())
    cout << s[0] << endl;
```
