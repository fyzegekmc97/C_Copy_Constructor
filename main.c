#include <stdio.h>
#include <stdlib.h>
#include <gstreamer-1.0/gst/gst.h>
#include <gstreamer-1.0/gst/rtsp-server/rtsp-server.h>

typedef struct somestruct
{
    int some_int;
    u_int64_t someunsignedint ;
    float somefloat ;
    char * somestr  ;
}somestruct;

somestruct somefunction()
{
    somestruct s1 ;
    s1.some_int = 5 ;
    s1.somefloat = 5.4f;
    s1.somestr = "asa" ;
    printf("%s", s1.somestr);
    return s1 ;
}

int main() {
    somestruct structobj ;
    somestruct *ptr2somestruct = &structobj ;
    ptr2somestruct->some_int = 5 ;
    printf("%d \n", ptr2somestruct->some_int) ;
    somestruct somestruct1 = somefunction() ;

    return 0;
}
