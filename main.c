#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char *qs = getenv("QUERY_STRING");
    char username[256];
    sscanf(qs, "username=%s", username);
    printf("Content-Type:text/html;charset=utf-8\r\n\r\n");
    printf("<html><head></head><body>");

    if (strcmp(username, "admin") == 0)
    {
        printf("登录成功！");
    }
    else
    {
        printf("登录失败！");
    }

    printf("<font color='red'>用户名是：%s</font>", username);
    printf("</body></html>");
    return 0;
}