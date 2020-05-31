# 说明下列例子的含义，如果存在问题，试着修改它。
    (a) while (string::iterator iter != s.end()) {/*...*/} // iter 未被初始化，会导致预期之外的结果。
    修改：
```cpp
string::iterator iter = s.begin();
while (iter != s.end()) {/*...*/}
```
    (b) while (bool status = find(word)) {/*...*/}
            if (!status) {/*...*/} // 错误，status 变量的作用于仅在 while 语句之内。
    修改：
```cpp
bool status = true;
while (status = find(word)) {/*...*/}
if (!status) {/*...*/}
```