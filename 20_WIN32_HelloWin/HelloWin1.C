#include <Windows.h> 

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam); 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
                    LPSTR lpCmdLine, int nShowCmd)
{
    static TCHAR szClsName[] = TEXT("HelloWin"); 
    static TCHAR szWinTitle[] = TEXT("MSTC 3 -> 22/12/2022"); 
    
    WNDCLASSEX wnd; 
    MSG msg; 

    HWND hWnd; 

    ZeroMemory(&wnd, sizeof(WNDCLASSEX)); 
    ZeroMemory(&msg, sizeof(MSG)); 

    wnd.cbSize = sizeof(WNDCLASSEX); 
    wnd.cbClsExtra = 0; 
    wnd.cbWndExtra = 0; 
    wnd.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); 
    wnd.hCursor = LoadCursor(NULL, IDC_ARROW); 
    wnd.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
    wnd.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 
    wnd.hInstance = hInstance; 
    wnd.lpszClassName = szClsName; 
    wnd.lpszMenuName = NULL; 
    wnd.lpfnWndProc = WndProc; 
    wnd.style = CS_HREDRAW | CS_VREDRAW; 

    RegisterClassEx(&wnd); 

    hWnd = CreateWindowEx(WS_EX_APPWINDOW, szClsName, szWinTitle, WS_OVERLAPPEDWINDOW, 
                        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 
                        NULL, NULL, hInstance, NULL); 

    ShowWindow(hWnd, nShowCmd); 
    UpdateWindow(hWnd); 

    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg); 
        DispatchMessage(&msg); 
    }

    return (msg.wParam); 
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
        case WM_DESTROY: 
            PostQuitMessage(0); 
            break; 
    }

    return (DefWindowProc(hWnd, uMsg, wParam, lParam)); 
}

/* 
    VS -> PROJECT TEMPLATE 
    REFACTOR 
*/
