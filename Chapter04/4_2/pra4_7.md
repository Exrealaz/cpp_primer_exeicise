# 溢出是何含义？ 写出三条将导致溢出的表达式。
    溢出是指运算结果超出了该类型能够表示的范围。
    (1) int i = 0x7FFFFFFF;
        i += 1;
    (2) short j = 32767;
        ++j;
    (3) float f = 0x7fffffff;
        f *= f;
        f *= f;
        f *= f;