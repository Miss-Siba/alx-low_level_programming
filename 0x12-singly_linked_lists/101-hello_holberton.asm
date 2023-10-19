section .data
    hello db "Hello, Holberton",10 ; The string to be printed with a newline character (10)

section .text
    global main

    extern printf
    main:
        push rbp
        mov rdi, hello   ; Format string
        call printf     ; Call the printf function
        add rsp, 8      ; Restore the stack
        xor rax, rax    ; Return 0
        pop rbp
        ret

