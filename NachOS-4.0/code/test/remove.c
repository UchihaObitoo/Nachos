#include "syscall.h"

int main()
{
    PrintString("Nhap ten file can xoa: ");
    char *name;
    ReadString(name, 255);
    Remove(name);
    Halt();
}