#ifndef COMMONHELP_H
#define COMMONHELP_H

#include <windows.h>
#include <iostream>
#include <winreg.h>
#include <QDebug>

#define MAX(a, b)   ((a)>(b)?(a):(b))
#define MIN(a, b)   ((a)<(b)?(a):(b))


using namespace std;

class CommonHelp
{
public:
    CommonHelp();
    static int ReadReg(const char *path, const char *key, unsigned char *value);
    static int WriteReg(const char *path, const char *key, const char *value);
    static int DelRegKey(const char *path, const char *key);
};

#endif // COMMONHELP_H
