section .data
    hello_message db 'Hello, World!',0xA  
    hello_length equ $ - hello_message    

section .bss

section .text
    global _start  

_start:
    ; Write message to stdout
    mov eax, 4            ; System call number for sys_write
    mov ebx, 1            ; File descriptor 1 - standard output
    mov ecx, hello_message ; Pointer to the message string
    mov edx, hello_length ; Length of the message string
    int 0x80              ; Perform the system call

    ; Exit the program
    mov eax, 1            ; System call number for sys_exit
    mov ebx, 0            ; Return 0 (success)
    int 0x80              ; Perform the system call

