#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;

int main(){
    struct timespec time2 ;
    clock_gettime( CLOCK_REALTIME, &time2 );
    //获取微秒时间
             cout  << "sec" << time2.tv_sec << endl;
             cout  << "nsec" << time2.tv_nsec << endl;
                cout  << "sec*1000000:" << time2.tv_sec*1000000 << endl;

}