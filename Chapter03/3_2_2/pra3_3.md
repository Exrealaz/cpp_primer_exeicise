请说明 string 类的输入运算符和 getline 函数分别是如何处理空白字符的。

    string 类的输入运算符会自动忽略开头的空白字符，并读取第一个以后的非空字符，直到遇到空白字符为止
    getline 函数会记录所有的输入字符直至遇到换行符