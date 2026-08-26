.intel_syntax noprefix
.global _start

.text

_start:
    mov rax, 5
    mov rbx, 7

    add rax, rbx

    mov rdi, rax

    mov rax, 60
    syscall
