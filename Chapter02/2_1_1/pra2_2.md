Q：计算按揭货款时，对于利率，本金和付款分别应选择何种数据类型？说明你的理由。
A：都应该选择double类型，因为他们的运算都涉及到了有理数域，无法只用int表示，而执行浮点型运算最好选择double，float类型通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。