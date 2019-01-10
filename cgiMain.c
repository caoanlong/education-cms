#include <stdio.h>
#include <string.h>
#include "cgic.h"

int cgiMain()
{
    char name[256] = {0};
    char pwd[256] = {0};
    cgiHeaderContentType("text/html;charset=utf-8");
    if (cgiFormString("name", name, sizeof(name)) != cgiFormSuccess)
    {
        fprintf(cgiOut, "<html><head></head><body><h1>请填写用户名！</h1></body></html>");
        return 0;
    }
    if (cgiFormString("password", pwd, sizeof(pwd)) != cgiFormSuccess)
    {
        fprintf(cgiOut, "<html><head></head><body><h1>请填写密码！</h1></body></html>");
        return 0;
    }
    fprintf(cgiOut, "<html><head></head><body><h1>你好！<br/>用户名:%s，密码：%s</h1></body></html>", name, pwd);
    return 0;
}