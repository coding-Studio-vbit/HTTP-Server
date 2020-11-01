#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include<string.h>
void checkstatus();
void dateandtime();
void serverused();
void contentlen();
void contenttype();
void connection();
void lastmodified();
char *month(int m);
char *week(int w);
int main()
{
checkstatus();
dateandtime();
serverused();
lastmodified();
contentlen();
contenttype();
connection();
return 0;
}
void checkstatus()
{
char status[100]="HTTP/1.1 200 OK";
printf("%s \n",status);
}
void dateandtime()
{
char dt[1024];
int a,b;
time_t now = time(&now);
struct tm *ptm = gmtime(&now);
a=ptm->tm_wday;
b=ptm->tm_mon;
char cm[30];
char cw[30];
strcpy(cm,month(b));
strcpy(cw,week(a));
sprintf(dt,"Date: %s,%d %s %d %d:%d:%d GMT",cw,ptm->tm_mday,cm,ptm->tm_year+1900,ptm->tm_hour,ptm->tm_min,ptm->tm_sec);
printf("%s \n",dt);
}
void serverused()
{
char s[50]= "Server: CSSOC";
printf("%s \n",s);
}
void contentlen()
{
char a[20] ="hello";
char conlen[100];
sprintf(conlen,"Content-Length: %ld bytes",strlen(a));
printf("%s \n",conlen);
}
void contenttype()
{
char contyp[50] = "Content-Type: text";
printf("%s \n",contyp);
}
void connection()
{
char connect[30]="Connection: closed";
printf("%s \n",connect);
}
void lastmodified()
{
char lm[1024];
int x,y;
struct tm *foo;
struct stat attrib;
stat("demo.txt", &attrib);
foo = gmtime(&(attrib.st_mtime));
x=foo->tm_wday;
y=foo->tm_mon;
char M[30];
char W[30];
strcpy(M,month(y));
strcpy(W,week(x));
sprintf(lm,"last modified: %s,%d %s %d %d:%d:%d GMT",W,foo->tm_mday,M,foo->tm_year+1900,foo->tm_hour,foo->tm_min,foo->tm_sec);
printf("%s \n",lm);
}
char * month(int m)
{
switch(m)
{
case 1:

return "January";

break ;

case 2:

return "February";

break ;

case 3:

return "March"  ;

break ;

case 4:

return "April" ;

break ;

case 5:

return "May";

break ;

case 6:

return "June"  ;

break ;

case 7:

return "July"  ;

break ;

case 8:

return "August" ;

break ;

case 9:

return "September";

break ;

case 10:

return "October";

break ;

case 11:

return "November";

break ;

case 12:

return "December";

break;

default : printf ( " EXIT " ) ;
}
}
char * week(int n)
{
switch(n)
{
        case 1: 
            return "Monday";
            break;
        case 2: 
            return "Tuesday";
            break;
        case 3: 
            return "Wednesday";
            break;
        case 4: 
            return "Thursday";
            break;
        case 5: 
            return "Friday";
            break;
        case 6: 
            return "Saturday";
            break;
        case 0: 
            return "Sunday";
            break;
        default: 
            printf("Invalid input!");
    }
}









