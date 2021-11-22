
#include <windows.h>

#include <stdio.h>



void main(void)

{

STARTUPINFO si;

PROCESS_INFORMATION pi;

ZeroMemory(&si, sizeof(si));

si.cb = sizeof(si);

ZeroMemory(&pi, sizeof(pi));


//for process creation
// Start the child process.

if (!CreateProcess("C:\\Windows\\system32\\notepad.exe", // module name which is the Windows cmd command (put file address which you want to run as a child process)

NULL, // Command line.

NULL, // Process handle not inheritable.

NULL, // Thread handle not inheritable.

FALSE, // Set handle inheritance to FALSE.

0, // No creation flags.

NULL, // Use parents environment block.

NULL, // Use parents starting directory.

&si, // Pointer to STARTUPINFO structure.

&pi) // Pointer to PROCESS_INFORMATION structure.

)

printf("\nSorry! CreateProcess() failed.\n\n");

else

printf("\nWell, CreateProcess() looks OK.\n\n size of startup info: %d \tsize of process info: %d",sizeof(si),sizeof(pi));



// Wait until child process exits (in milliseconds). If INFINITE, the functions time-out interval never elapses except with user or other intervention.

WaitForSingleObject(pi.hProcess, INFINITE);

printf("\n");

//for termination
// Close process and thread handles.

CloseHandle(pi.hProcess);

CloseHandle(pi.hThread);


}
