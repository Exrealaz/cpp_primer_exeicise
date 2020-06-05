# 解释在下面的 if 语句中条件部分的判断过程。
```c++
const char *cp = "Hello World";
if(cp && *cp)
```
先判断 cp 是否为0，cp 是一个指向 const char 类型的指针，不为零；再对 cp 进行解引用，得到其指向的对象，亦不为零，于是结果为真