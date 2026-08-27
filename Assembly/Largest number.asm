.intel_syntax noprefix
.global _start

.section .text
_start:

    mov rax, 5
    mov rbx, 8
    mov rcx, 3
    mov rdx, 2

    cmp rax, rbx
    jge check_rcx
    mov rax, rbx

check_rcx:
    cmp rax, rcx
    jge check_rdx
    mov rax, rcx

check_rdx:
    cmp rax, rdx
    jge exit
    mov rax, rdx

exit:
    mov rax, 60
    xor rdi, rdi
    syscall
