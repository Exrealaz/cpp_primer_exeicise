/*
本节的最后一个例子跳回到 begin，其实使用循环能更好地完成该任务。重写这段代码，注意不再使用 goto 语句
*/
extern int get_size();
int main()
{
    int sz = get_size();
    while (sz <= 0)
    {
        sz = get_size();
    }
    return 0;
}