section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0

section .text
    global main

    extern printf, exit

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    add rsp, 8  ; Adjust the stack after the call (64-bit calling convention)
    
    ; Exit the program
    mov rax, 60
    xor rdi, rdi
    syscall
