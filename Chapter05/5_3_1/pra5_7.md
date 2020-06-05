# 改正下列代码段中的错误。
    (a) if (ival1 != ival2)
            ival1 = ival2 // 加上分号
        else ival1 = ival2 = 0;
    (b) if (ival < minval)
            minval = ival;
            occurs = 1;
        改正：
        if (ival < minval)
        {
            minval = ival;
            occurs = 1;
        }
    (c) if (int ival = get_value())
            cout << "ival = " << ival << endl;
        if (!val)
            cout << "ival = 0\n";
        改正：
        int ival = 0;
        if (ival = get_value())
            cout << "ival = " << ival << endl;
        if (!val)
            cout << "ival = 0\n";
    (d) if (ival = 0) // if (ival == 0)
            ival = get_value();