解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。

    (a) std::cin >> int input_value; // 定义并读入 int 类型值 input_value, 这里应该先定义再使用，
    int input_value = 0;
    std::cin >> input_value;
    (b) int i = {3.14}; // 定义并初始化一个 int 类型值 i ，但初始化错误，使用 double 的值初始化 int 变量时可能丢失数据，所以编译器会拒绝，应改为 double i = {3.14}; 或者 int i(3.14); 或 int i = 3.14;
    (c) double salary = wage = 9999.99; // 定义并初始化两个 double 变量，salary和wage, wage 在这里应该是未定义的，
    double salary = 9999.99, wage = 9999.99;
    (d) int i = 3.14 // 定义并初始化一个 int 类型值 i, 最终赋值将为3