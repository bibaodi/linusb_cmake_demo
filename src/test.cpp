/*
 *
 * build by lishuwei
 * date:2021-07-22
 */

#include "hotplug.h"

int main() {

    printf("start");
    // HotPlug hotPlug;
    //	hotPlug.start();
    int i = 10;
    while (i > 0) {
        printf("hotplug=%d\n", i--);
    }
    printf("end\n");

    return 0;
}
