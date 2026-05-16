#pragma once
#include <iostream>
#include <windows.h>

struct ProcessInfo {
    DWORD pid;
    wchar_t* name;
    SIZE_T memoryUsage;
    double cpuUsage;
    double diskUsage;
    double netUsage;
    ProcCat category;
    wchar_t* statusStr;
};

struct ProcessCpuTime {
    DWORD pid;
    ULONGLONG lastKernel;
    ULONGLONG lastUser;
    bool isActive;
};
