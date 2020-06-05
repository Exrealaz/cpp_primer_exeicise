## 请指出下列的函数哪个有错误？为什么？应该如何修改这些错误呢？
    (a) 
```cpp
int f()
{
    string s;
    //...
    return s;
}
```
        该函数的定义的返回值是 int 类型，而实际返回类型却是 string，改：
```cpp
string f()
{
    string s;
    //...
    return s;
}
```
    (b)
```cpp
f2(int i) {/*...*/}
```
        定义函数时未声明其返回类型，改：
```cpp
void f2(int i) {/*...*/}
```
    (c)
```cpp
int calc(int v1, int v1) {/*...*/}
```
        不能出现名称相同的形参。改：
```cpp
int calc(int v1, int v2) {/*...*/}
```
    (d)
```cpp
double square(double x) return x*x;
```
        函数体必须用花括号括起来，改：
```cpp
double square(double x) {return x*x;}
```