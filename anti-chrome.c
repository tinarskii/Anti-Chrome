#include <stdlib.h>

int WinMain() {

    for(;;) {

        if (system("tasklist | findstr chrome.exe") == 0) {
            system("taskkill /f /im chrome.exe");
        }


    };

}
