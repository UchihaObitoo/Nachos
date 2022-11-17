#include "syscall.h"

int main()
{
    PrintString("Nhap ten file can xoa: ");
    char *name;
    ReadString(name, 255);
    int res = Remove(name);
    if (res == -1)
        PrintString("Cannot remove file!!!\n");
    else
        PrintString("Remove successfully!\n");
    Halt();
}