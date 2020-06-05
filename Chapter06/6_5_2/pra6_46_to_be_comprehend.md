## 能把 isShorter 函数定义成 constexpr 函数吗？如果能，将它改写成 constexpr 函数；如果不能，说明原因。
    不可以，因为 std::string::size() 不是 constexpr 函数，并且 s1.size() < s2.size() 不是常量表达式。