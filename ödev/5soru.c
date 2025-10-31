#include <stdio.h>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

int main() {

    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    
    wchar_t harf; 
    
    wprintf(L"Bir harf girin: "); 
    wscanf(L" %lc", &harf); 

    switch (harf)
    {
        
        case L'a':
        case L'e':
        case L'i':
        case L'ı': 
        case L'o':
        case L'ö': 
        case L'u':
        case L'ü': 
            wprintf(L"Sesli harf!");
            break; 

        default:
            wprintf(L"Sessiz harf!");
            break;
    }

    return 0;
}