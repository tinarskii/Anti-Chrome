#include <stdlib.h>

int WinMain() {

    while(1) {

        if (system("tasklist | findstr chrome.exe") == 0) {
            system("taskkill /f /im chrome.exe");
        }

    };

}